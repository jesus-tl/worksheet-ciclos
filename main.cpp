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

for (secuencia_3 = 1; secuencia_3 <= 81; secuencia_3++){

  if(secuencia_3 <= 81){

    secuencia_3 = pow(3, exponente); //Calcular exponentes con base de 3
  
    exponente++; //Incrementar exponentes

    cout << secuencia_3; //Desplegar tercera secuencia

  if (secuencia_3 < 81) //Separar secuencia con comas ','
    cout << ", ";
  }
  
}

cout << endl; //Para mantener secuencia en una sola linea

//Cuarta secuencia

int secuencia_4;

cout << "4. ";

for (secuencia_4 = 0; secuencia_4 <= 14; secuencia_4++){
  
  //Excluir 3, 6, 9 y 12
  if (secuencia_4 == 3 || secuencia_4 == 6 || secuencia_4 == 9 || secuencia_4 == 12){
    cout << "\b\b";
  }
  else{
    cout << secuencia_4; //Desplegar el resto de la secuencia
  }

  if (secuencia_4 < 14) //Separar secuencia con comas ','
    cout << ", ";

}

cout << endl; //Para mantener secuencia en una sola linea

//Quinta Secuencia

int secuencia_5;

cout << "5. ";

for (secuencia_5 = 54; secuencia_5 >= 0; secuencia_5--) {
  
  if (secuencia_5 == 54){ //Desplegar el 54
    cout << secuencia_5;
  }

  else if (secuencia_5 < 54 && secuencia_5 > 1){
    secuencia_5 = secuencia_5 / 2; // Sumar 1 a resto de la secuencia
    cout << secuencia_5 + 1;
  }

  else{
    cout << secuencia_5; //Desplegar el 0
  }

  if (secuencia_5 > 0){ //Separar secuencia con comas ','
    cout << ", ";
  }
}

cout << endl; //Para mantener secuencia en una sola linea

//Sexta S

return 0;
}