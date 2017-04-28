#include <iostream>
#include <cmath>

using namespace std;

//funciones
int menu();
int factorial(int); 
float e1(int);
int main(){
 bool salir=false;
 while ( !salir ) {
  switch ( menu() ){
   case 1:{
   int n1;
    cout<<"Ingrese un  numero: "<<endl;
    cin>>n1;
    cout<<"El total es: "<<e1(n1)<<endl;
   break;
   }
   case 2:{

   break;
   }
   case 3:{
    salir=true;
   break;
   }
  }//fin del switch
 }//fin del while
 return 0;
}//fin del main

int menu(){
 int opcion;
 bool valido=true;
 do{
  cout<<"       Menu"<<endl
   <<"1. Ejercicio 1"<<endl
   <<"2. Ejercicio 2"<<endl
   <<"3. Salir"<<endl;
  cout << "Ingrese una opcion: "<<endl;
  cin>>opcion;
  if (opcion>0 && opcion <5)
   valido=true;
  else{
   cout<<"Opcion no valida!"<<endl;
  }
 }while (!valido);
 return opcion;
}//fin menu

int factorial(int i){
 /*if (i<0) 
  return 1;
 else*/
 if (i==0){
  return 1;
 }else{
  return i*factorial(i-1);
  }
}//fin factorial

float e1(int x){
 float total=0;
 for (int i=0;i<13;i++){
  total += ((pow(x,i))/(factorial(i)));
 }
 return total;
}//fin ejercicio1
