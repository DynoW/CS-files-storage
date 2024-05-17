## Pseudocod:

#### Structura alternativa:

```
daca conditie atunci
    S1
altfel
    S2
```
```
daca conditie atunci
    S
```
#### Structuri repetitive:

I. cu test initial (la inceput):

a) `cat timp` - nr. necunoscut de pasi
b) `pentru` - nr. cunoscut de pasi

II. cu test initial (la sfarsit):

c) `repeta ... pana cand` - nr. necunoscut de pasi
(executa ... cat timp)

#### Folosire:
a)
```
cat timp conditie executa
    S
```
b)
```
pentru i<-Vm,VM,pas executa
    S
```
c)
```
repeta
    S
pana cand conditie
```
###### SAU
```
executa
    S
cat timp conditie
```

exemplu:
```
pentru i<-2,7 executa
    scrie i
output=>234567
```
```
pentru i<-2,7,2 executa
    scrie i
output=>246
```
```
pentru i<-7,2,-1 executa
    scrie i
output=>765432
```

###  Transformari in structuri:
1.
cat timp ---> repeta
```
cat timp conditie executa
    S
```
==>
```
daca conditie atunci
    repeta
        S
    pana cand !conditie
```
2.
repeta ---> cat timp
```
repeta
    S
pana cand conditie
```
==>
```
cat timp ! conditie executa
    S
```
3.
pentru -> cat timp/repeta

a) crescator
```
pentru i<-Vm,VM,pas executa
    S
```
==>
```
i<-Vm
cat timp i<= VM executa
    S
    i<i+pas
```
##### sau
```
i<-Vm
daca i<= VM executa
    repeta 
        S
    i<-i+pas
    pana cand i>Vm
```
b) descrescator
```
pentru i<-VM,Vm,-pas executa
    S
```
==>
```
i<-VM
cat timp i >= Vm executa
    S
    i<i-pas
```
###### sau
```
i<-VM
daca i >= Vm executa
    repeta 
        S
    i<-i-pas
    pana cand i<VM
```
#### Atentie!
- pseudocod
```
daca cont atunci
    S1
altfel
    S2
```
- C++
```
if(cond){
    S1;
} else {
    S2;
}
```
