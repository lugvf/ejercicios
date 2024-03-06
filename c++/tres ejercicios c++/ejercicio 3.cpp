// ejercicio numero tres

#include <iostream>
using namespace std;
int main() {
    int  valores [20];
  
    for (int i = 0; i < 5 ; i++) {
        cout << "Ingrese un numero:  ";
        cin >> valores[i];
    }

    for (int i = 0; i < 5; ++i) {
        if (valores[i] % 2 == 0) {
            valores[i] += 1;
        } else {
            valores[i] -= 2;
        }

        if (valores[i] < 0) {
            valores[i] = 0;
        }
    }

  cout<<"Nueva mejora"<<endl;
    for (int i = 0; i < 5;i++) {
        cout << valores[i] << " ";
    }
  
    return 0;
}
