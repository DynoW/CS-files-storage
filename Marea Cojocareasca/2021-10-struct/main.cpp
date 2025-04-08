#include <iostream>

using namespace std;
struct elev{
    int cod;
    float nota1,nota2;
}y[31];
int main()
{
    y[2].cod=6;
    y[2].nota1=6.5;
    y[2].nota2=6.9;
    cout<< y[2].cod<<" "<<y[2].nota1<<" "<<y[2].nota2;
    cout << "Hello world!" << endl;
    return 0;
}
