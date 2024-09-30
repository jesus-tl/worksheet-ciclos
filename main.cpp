//Jesus Torres , jesus-tl, 801203215

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){


//Primera Secuencia 10 a -10

int secuencia_1;

cout << "- Primera Secuencia: ";

for (secuencia_1 = 11 ; secuencia_1 > -11; secuencia_1--){

  if (secuencia_1 % 2 == 0){ //Verificar si numero es par

  cout << secuencia_1 << ", ";

  }
}

cout << endl;


return 0;
}