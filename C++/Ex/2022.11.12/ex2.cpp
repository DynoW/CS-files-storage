#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    switch(n){
        case 1: cout << "Luni";break;
        case 2: cout << "Marti";break;
        case 3: cout << "Miercuri";break;
        case 4: cout << "Joi";break;
        case 5: cout << "Vineri";break;
        case 6: cout << "Sambata";break;
        case 7: cout << "Duminica";break;
        default: cout << "Nr. prea mare";
    }
    return  0;
}