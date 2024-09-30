//Jesus Torres , jesus-tl, 801203215

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

//Primera Secuencia

int secuencia_1;

cout << "1. ";

for (secuencia_1 = 10; secuencia_1 >= -10; secuencia_1--){

  if (secuencia_1 % 2 == 0){ //Verificar si numero es par

    cout << secuencia_1; //Desplegar primera secuencia
  
  if (secuencia_1 > -10) //Separar secuencia con comas ','
    cout << ", ";
  }

}

cout << endl; //Para mantener secuencia en una sola linea

//Segunda Secuencia 

int secuencia_2;

cout << "2. ";

for (secuencia_2 = -1; secuencia_2 <= 22; ++secuencia_2){
  //Incrementar adicionalmente por 2 más para que se despliegue cada tercer número
  ++secuencia_2;
  ++secuencia_2;

  cout << secuencia_2; //Desplegar segunda secuencia
  
  if (secuencia_2 < 22) //Separar secuencia con comas ','
    cout << ", ";

  
}

cout << endl; //Para mantener secuencia en una sola linea

//Tercera Secuencia 

int secuencia_3, exponente = 0;

cout << "3. ";

for (secuencia_3; secuencia_3 <= 81; secuencia_3++){

  if(secuencia_3 <= 81){

    secuencia_3 = pow(3, exponente);
  
    exponente++;

    cout << secuencia_3; //Desplegar tercera secuencia

  if (secuencia_3 < 81) //Separar secuencia con comas ','
    cout << ", ";
  }
}

cout << endl; //Para mantener secuencia en una sola linea

//Cuarta secuencia

int secuencia_4



return 0;
}