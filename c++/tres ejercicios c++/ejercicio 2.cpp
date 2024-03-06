// EJERCICIO NÚMERO DOS
#include <iostream>
using namespace std;
int main(){
	
	int valores[10]={1,2,3,4,5,6,7,8,9,10};
	int promedio;
	int suma;
	int promedio25;
    for(int i=0;i<10;i++){
    suma = suma+valores[i];
	}
	promedio = suma/10;
	promedio25 = suma*0.25;
	cout<<"La suma es: "<<suma<<endl;
		cout<<"El promedio es: "<<promedio<<endl;
			cout<<"El Promedio del 25% es: "<<promedio25<<endl;
	return 0;
}