#include <iostream>
using namespace std;

int main() {

    string nombre[4];
    int fechanacimiento[4];
    string vecindad[4];
    int dia[4];
    int mes[4];
    int anio[4];

    cout << "__||°°  REGISTRO DE DATOS  °°||__" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Ingrese su Nombre:" << endl;
        cin >> nombre[i];
        cout << "Ingrese Fecha de Nacimiento (Dia,Mes,Anio)" << endl;
        cin >> dia[i] >> mes[i] >> anio[i];
        fechanacimiento[i] = anio[i] * 10000 + mes[i] * 100 + dia[i];
        cout << "Ingrese Vecindad:" << endl;
        cin >> vecindad[i];
    }

    cout << "______________________________________________________________________________________________________________________________" << endl;

    int anioactual = 2024;

    for (int i = 0; i < 4; i++) {
        int edad = anioactual - anio[i];

        if (mes[i] > 2 || (mes[i] == 2 && dia[i] >= 28)) {
            edad--;
        }

        cout << "Nombre: " << nombre[i] << endl;
        cout << "Fecha de nacimiento: " << dia[i] << "/" << mes[i] << "/" << anio[i] << endl;
        cout << "Vecindad: " << vecindad[i] << endl;

        if (edad >= 18) {
            cout << "Es mayor de edad" << endl;
        } else {
            cout << "Es menor de edad" << endl;
        }

        cout << "Edad: " << edad << endl;
        cout << "_________________________________________________________________________________________________________________________" << endl;
    }

   bool repetir = true;

while(repetir) {
    cout << "__||°° REGISTRO DE BUSQUEDA °°||__" << endl;
    
    string nombre1;
    bool encontrado = false;
    
    cout << "Ingrese el nombre a buscar: " << endl;
    cin >> nombre1;

    for(int i = 0; i < 4; i++) {
        if(nombre1 == nombre[i]) {
            int edad = anioactual - anio[i];

            if (mes[i] > 2 || (mes[i] == 2 && dia[i] >= 28)) {
                edad--;
            }

            cout << "Nombre: " << nombre[i] << endl;
            cout << "Fecha de nacimiento: " << dia[i] << "/" << mes[i] << "/"<< anio[i] << endl;
            cout <<"Vecindad: "<<vecindad[i]<<endl;

            if(edad >= 18) {
                cout << "Es mayor de edad" << endl;
            } else {
                cout << "Es menor de edad" << endl;
            }
            
            cout << "Edad: " << edad << endl;
            encontrado = true;
            break; 
        }
    }

    if(!encontrado) {
        cout << "Nombre no encontrado" << endl;
    }

  
   bool repetir = true;

while(repetir) {
    cout << "__||°° REGISTRO DE BUSQUEDA °°||__" << endl;
    
    string nombre1;
    bool encontrado = false;
    
    cout << "Ingrese el nombre a buscar: " << endl;
    cin >> nombre1;

    for(int i = 0; i < 4; i++) {
        if(nombre1 == nombre[i]) {
            int edad = anioactual - anio[i];

            if (mes[i] > 2 || (mes[i] == 2 && dia[i] >= 28)) {
                edad--;
            }

            cout << "Nombre: " << nombre[i] << endl;
            cout << "Fecha de nacimiento: " << dia[i] << "/" << mes[i] << "/"<< anio[i] << endl;
            cout <<"Vecindad: "<<vecindad[i]<<endl;

            if(edad >= 18) {
                cout << "Es mayor de edad" << endl;
            } else {
                cout << "Es menor de edad" << endl;
            }
            
            cout << "Edad: " << edad << endl;
            encontrado = true;
            break; 
        }
    }

    if(!encontrado) {
        cout << "Nombre no encontrado" << endl;
    }

  
    char respuesta;
    cout << "¿Desea realizar otra busqueda? (s/n): ";
    cin >> respuesta;

    if(respuesta == 's') {
        repetir = true; 
    } else {
        repetir = false; 
    }
}
   
}
 return 0;
}