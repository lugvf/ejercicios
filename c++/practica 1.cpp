#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float num1,num2,num3,g,y;
cout<<"ingrese un numero: ";
cin>>num1;
cout<<"ingrese un numero: ";
cin>>num2;
cout<<"ingrese un numero: ";
cin>>num3;

if (num1 < 0){
	num1 = num1/num2/num3;
	cout<<"la división es: "<<num1<<endl;
	}
     else{
     	if(num1>0);
     	num1= pow(num1,2);
     	g = pow(num1,2);
     	y = pow(g,2);
     	cout<<"la potencia es: "<<y<<endl;
	 }	
	return 0;
}