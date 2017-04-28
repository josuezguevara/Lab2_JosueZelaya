#include <iostream>
#include <cmath>

using namespace std;

//funciones
int menu();
int factorial(int); 
float e1(int);
double distancia(int,int,int,int);

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
    int a1, a2, b1, b2, c1, c2, d1, d2;
    cout<< "Ingrese la coordenada X de A: "<<endl;
    cin>>a1;
    cout<< "Ingrese la coordenada Y de A: "<<endl;
    cin>>a2;
    cout<< "Ingrese la coordenada X de B: "<<endl;
    cin>>b1;
    cout<< "Ingrese la coordenada Y de B: "<<endl;
    cin>>b2;
    cout<< "Ingrese la coordenda X de C: "<<endl;
    cin>>c1;
    cout<< "Ingrese la coordenada Y de C: "<<endl;
    cin>>c2;
    cout<< "Ingrese la coordenada X de D: "<<endl;
    cin>>d1;
    cout<< "Ingrese la coordenada Y de D: "<<endl;
    cin>>d2;
    cout<< "Los puntos son: "<<endl;
    cout<< "("<<a1<<","<<a2<<")"<<endl;
    cout<< "("<<b1<<","<<b2<<")"<<endl;
    cout<< "("<<c1<<","<<c2<<")"<<endl;
    cout<< "("<<d1<<","<<d2<<")"<<endl;

    double cd, db, ba, ac, ad;
    cd=distancia(c1,c2,d1,d2);
    db=distancia(d1,d2,b1,b2);
    ba=distancia(b1,b2,a1,a2);
    ac=distancia(a1,a2,c1,c2);
    ad=distancia(a1,a2,d1,d2);

    cout<<"Los lados del trapezoide miden: "<<endl;
    cout<<"Lado 1: "<<cd<<endl;
    cout<<"Lado 2: "<<db<<endl;
    cout<<"Lado 3: "<<ba<<endl;
    cout<<"Lado 4: "<<ac<<endl;

    cout<<"los lados del triangulo 1 miden: "<<endl;
    cout<<"Lado 1: "<<cd<<endl;
    cout<<"Lado 2: "<<ac<<endl;
    cout<<"Lado 3: "<<ad<<endl;

    cout<<"Los lados del triangulo 2 miden: "<<endl;
    cout<<"Lado 1: "<<db<<endl;
    cout<<"Lado 2: "<<ba<<endl;
    cout<<"Lado 3: "<<ad<<endl;
    
    double semit1,semit2;//variable de semiperimetros de los trianngulos
    double perit1,perit2;//variable de perimetros

    perit1=(cd+ad+ac);
    perit2=(db+ba+ad);
    semit1=((perit1)/2);
    semit2=((perit2)/2);

    cout<<"Semiperimetro triangulo 1: "<<semit1<<endl;
    cout<<"Semiperimetro triangulo 2: "<<semit2<<endl;
    cout<<"Perimetro triangulo 1: "<<perit1<<endl;
    cout<<"Perimetro triangulo 2: "<<perit2<<endl;
    
    double altura1,altura2,altura3;//alturas de triangulo 1
    double altura4,altura5,altura6;//alturas del triangulo 2
    
    //altura del triangulo1
    altura1=(2/ac*(sqrt(semit1*(semit1-ac)*(semit1-cd)*(semit1-ad))));
    altura2=(2/cd*(sqrt(semit1*(semit1-ac)*(semit1-cd)*(semit1-ad))));
    altura3=(2/ad*(sqrt(semit1*(semit1-ac)*(semit1-cd)*(semit1-ad))));
    //altura del triangulo 2
    altura4=(2/db*(sqrt(semit2*(semit2-db)*(semit2-ba)*(semit2-ad))));
    altura5=(2/ba*(sqrt(semit2*(semit2-db)*(semit2-ba)*(semit2-ad))));
    altura6=(2/ad*(sqrt(semit2*(semit2-db)*(semit2-ba)*(semit2-ad))));

    cout<<"Las alturas del triangulo 1 miden: "<<endl;
    cout<<"Altura 1: "<<altura1<<endl;
    cout<<"Altura 2: "<<altura2<<endl;
    cout<<"Altura 3: "<<altura3<<endl;

    cout<<"Las alturas del triangulo 2 miden: "<<endl;
    cout<<"Altura 1: "<<altura4<<endl;
    cout<<"Altura 2: "<<altura5<<endl;
    cout<<"Altura 3: "<<altura6<<endl;
    double area;
    area=((ad*altura1)/2)+((ad*altura4)/2);
    cout<<"El area del trapezio es de : "<<area<<endl;
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

double distancia(int x1,int y1, int x2, int y2){
 return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}//fin de distancia

