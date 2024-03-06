#include<iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    
    cout << "Ingrese un numero: " << endl;
    cin >> n1;
    cout << "Ingrese un numero: " << endl;
    cin >> n2;
    cout << "Ingrese un numero: " << endl;
    cin >> n3;

    if (n1 >= n2 && n1 > n3) {
        cout << "El numero mayor es: " << n1 << endl;
        if (n1 % 2 == 0) {
            cout << "El numero mayor es par " << endl;
        } else {
            cout << "El numero mayor es impar " << endl;
        }
    } else {
        if (n2 > n3) {
            cout << "El mayor es: " << n2 << endl;
            if (n2 % 2 == 0) {
                cout << "El numero mayor es par " << endl;
            } else {
                cout << "El numero mayor es impar " << endl;
            }
        } else {
            cout << "El mayor es: " << n3 << endl;
            if (n3 % 2 == 0) {
                cout << "El numero mayor es par " << endl;
            } else {
                cout << "El numero es impar " << endl;
            }
        }
    }
    return 0;
}
