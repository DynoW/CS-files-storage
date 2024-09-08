# Pseudocod:
## Structura alternativa:
```
daca [conditie] atunci
    [instructiune 1]
altfel
    [instructiune 2]
```
```
daca [conditie] atunci
    [instructiune]
```
## Structuri repetitive:
### I. cu test initial (la inceput):
a) `cat timp [conditie]` - nr. necunoscut de pasi

b) `pentru [var]<-[Vm],[VM],[pas]` - nr. cunoscut de pasi
```
Explicatii:
var = variabila
Vm = valoarea minima
VM = valoarea maxima
pas = pas (exemplu: i++)
```

### II. cu test final (la sfarsit):
c) `repeta [instructiune] pana cand [conditie]` - nr. necunoscut de pasi ( sau `executa [instructiune] cat timp [conditie]` )

## Folosire:
a)
```
cat timp [conditie] executa
    [instructiune]
```
b)
```
Explicatii:
var = variabila
Vm = valoarea minima
VM = valoarea maxima
pas = pas (exemplu: i++)
```
```
pentru [var]<-[Vm],[VM],[pas] executa
    [instructiune]
```
c)
```
repeta
    [instructiune]
pana cand [conditie]
```
##### SAU
```
executa
    [instructiune]
cat timp [conditie]
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
##  Transformari in structuri:
###  1. cat timp --> repeta
```
cat timp [conditie] executa
    [instructiune]
```
==>
```
daca [conditie] atunci
    repeta
        [instructiune]
    pana cand ![conditie]
```
### 2. repeta --> cat timp
```
repeta
    [instructiune]
pana cand [conditie]
```
==>
```
cat timp ! conditie executa
    S
```
### 3. pentru -> cat timp/repeta
#### a) crescator
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
##### SAU
```
i<-Vm
daca i<= VM executa
    repeta 
        S
    i<-i+pas
    pana cand i>Vm
```
#### b) descrescator
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
##### SAU
```
i<-VM
daca i >= Vm executa
    repeta 
        S
    i<-i-pas
    pana cand i<VM
```
### Atentie!
- pseudocod
```
daca [conditie] atunci
    [instructiune 1]
altfel
    [instructiune 2]
```
- C++
```
if([conditie]) {
    [instructiune 1];
} else {
    [instructiune 2];
}
```
