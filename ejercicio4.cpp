#include <iostream>

using namespace std;
int main(){

int numero;
int division;
int contador =0;
cout << "Ingrese un numero: ";
cin >> numero;


while (numero > 1) {

division = numero /2;

cout << numero << " / " << 2 << " = " << division << endl;

numero = division;

 contador++;

}
cout << "Se dividio " << contador << " veces";

    return 0;
}

/*Este codigo es de complejidad logarítmica, ya que el numero de operaciones depende del logaritmo en base 2 de la cantidad de numeros ingresados, 
ya que en cada iteración se divide el numero por 2.*/
