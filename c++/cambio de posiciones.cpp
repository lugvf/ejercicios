#include <iostream>
using namespace std;
int main(){

  int n;
  cout<<"ingrese un numero: ";
  cin>>n;
  
 if(n<=3){
int n1,n2,n3;
 	 n1= n/100;
 	 n2=(n/10)%10;
 	 n3=n%10;
 	int intercambio = n3*100+n2*10+n1;
 	 		cout<<"el cambio es:"<<intercambio<<endl;
 
 	
 }else{
 	 {
   	
   int n4 = n/1000;
     int n5 = (n/100)%10;
     int n6 = (n/10)%10;
     int n7 = n%10;
 	int inter = n7*1000+n6*100+n5*10+n4;
 	
 	  cout<<"el cambio es:"<<n4<<endl;
	   cout<<"el cambio es:"<<n5<<endl;
	   cout<<"el cambio es:"<<n6<<endl;
	   cout<<"el cambio es:"<<n7<<endl;
	   cout<<"el cambio es:"<<inter<<endl;		
   }
 }
  
 
    
 
 
   
 	return 0;
 }

  
  
  
  
  


