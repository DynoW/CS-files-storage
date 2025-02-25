**1. suma cifrelor**

```cpp
s = 0;
while(n != 0){
    s = s + n % 10;
    n = n / 10;
}
```

sau

```cpp
s = 0;
while(n)
    s += n % 10, n /= 10;
```
**2. inversul/oglinditul/rasturnatul**

```cpp
inv = 0;
while(n != 0){
    inv = inv * 10 + n % 10;
    n = n / 10;
}
```

**3. factirii primi si puterile lor**

90=2^1\*3^2\*5^1

| n    | d   | p   |
| ---- | --- | --- |
| 90   | 2   | 0   |
| 45   |     | 1   |
| ---- | --- | --- |
| 15   | 3   | 0   |
| 5    |     | 1   |
|      |     | 1   |
| ---- | --- | --- |
|      | 4   | 0   |
| ---- | --- | --- |
| 1    | 5   | 0   |
|      |     | 1   |

```cpp
d = 2;
while(n != 1){
    p = 0;
    while(n % 2 == d){
        n = n/d;
        p++;
    }
    if(p != 0)
        // prelucrare p, d
        // ...
    d++;
}
```

**4. cmmdc & cmmmc**

a) cu scaderi repetate

```cpp
if(a * b == 0)
    cmmdc = a + b;
else {
    while(a != b)
        if(a > b)
            a = a - b;
        else
            b = b - a;
    cmmdc = a;
}
cmmmc = ca * cb / cmmdc;
```

b) Euclid

```cpp
if(a * b == 0)
    cmmdc = a + b;
else {
    D = a;
    I = b;
    R = D % I;
    while(R != 0){
        D = I;
        I = R;
        R = D % I;
    }
    cmmdc = I;
}
cmmmc = a * b / cmmdc;
```

**5. nr prim**

a)

```cpp
nrd = 0;
for(d = 1; d <= n; d++)
    if(n % d == 0)
        nrd++;
if(nrd == 2)
    // prelucrare n
    // ...
```

b) eficient

```cpp
nrd = 0;
for(d = 1; d * d < n; d++)
    if(n % d == 0)
        nrd = nrd + 2;
if(d * d == n)
    nrd++;
if(nrd == 2)
    // prelucrare n
    // ...
```

**6. suma divizorilor**

a)

```cpp
nrd = 0;
for(d = 1; d<=n; d++)
    if(n % d == 0)
        nrd++;
```

b) eficient

```cpp
s = 0;
for(d = 1; d * d < n; d++)
    if(n % d == 0)
        s = s + d + n / d;
if(d * d == n)
    s = s + d;
```

**7. sirul lui Fibonacci**

```
  c b a
1 1 2 3 5 8 13 21 ...
c b a
```

a) afisarea primilor n termeni

```cpp
int a, b, c, n;
cin >> n;
if(n == 1)
    cout << 1;
else if(n == 2)
    cout << 1 << " " << 1;
else {
    cout << 1 << " " << 1;
    c = b = 1;
    for(i = 3; i <= n; i++) {
        a = b + c;
        c = b;
        b = a;
        cout << a << " ";
    }
}
```

b) verificam daca un numar x face parte din sir

```cpp
int ok = 0;
cin >> x;
if(x == 1)
    ok = 1;
else {
    b = 1; c = 1; a = 0;
    while(a < x){
        a = b + c;
        c = b;
        b = a;
    }
    if(a == x)
        ok = 1;
} 
```

**8. transformari**

a) din baza 10 in baza b

8 (baza 10) = ? (baza 2)

```cpp
nrd = 0;
p = 1;
while(n != 0) {
	nrb = nrb + p * (n % b);
	n = n / b;
	p = p * 10;
}
```

b) din baza b in baza c

1011 (baza 2) = ? (baza 10)

```cpp
while(n != 0) {
	nr10 = nr10 + p * (n % 10);
	p = p * b;
	n = n / 10;
}
```
