# Introducere in C#

## Tipuri de date:

#### intregi:
    byte
    sbyte
    short
    ushort
    int
    uint
    long
    ulong

#### reale:
    float
    duble

#### caractere:
    char
    string

## Principalele obiecte:
### 1. Label (eticheta) - icon A - utilizat pentru:
- etichetarea altor obiecte care nu au aceasta proprietate
- afisaarea unui text

### 2. textBox - [ab| - utilizat pentru:
- afisarea valorilor obinute din executarea unor instructiuni
- introducerea unor valori in proiect

##### Multiline - permite scrierea pe mai multe randuri
##### BackBolor - culoare pentru fundalul obiectului

### 3. button - [ab - utilizat pentru:
- executarea unor instructiuni la comanda programatorului (intructiunile sunt scrise prin procedura *click*)

##### Text - nu modificati Name!!! doar text
##### ForeColor - culoarea scrisului
##### Font - size, bold

## Transformari:

### a) sir de caractere -> numar
####    Parse()
```
int x;
string s="12";
x=s.Parse(s);
```
### b) numar -> sir de caractere
####    ToString()
```
int x="12";
string s;
x=s.ToString();
```