//Jesus Torres , jesus-tl, 801203215

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){


//Primera Secuencia

int secuencia_1;

cout << "- Primera Secuencia: ";

for (secuencia_1 = -10 ; secuencia_1 <= 10; secuencia_1++){

  if (secuencia_1 % 2 == 0){ //Verificar si numero es par

  cout << secuencia_1; //Desplegar secuencia
  
  if (secuencia_1 < 10)
  cout << ", ";

  }
}

cout << endl; //Para mantener secuencia en una sola linea

//Segunda Secuencia 

int secuencia_2;

cout << "- Segunda Secuencia: ";

for (secuencia_2 = -1 ; secuencia_2 <= 22; ++secuencia_2){
  //Incrementar adicionalmente por 2 más para que se despliegue cada tercer número
  ++secuencia_2;
  ++secuencia_2;

  cout << secuencia_2; //Desplegar secuencia
  
  if (secuencia_2 < 22) //Separar secuencia con comas ','
  cout << ", ";

  
}

cout << endl; //Para mantener secuencia en una sola linea

return 0;
}