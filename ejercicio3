#include <iostream>
#include <vector>
using namespace std;
int main(){


int cantidad;
cout<< "Cuantos numeros desea ingresar? ";
cin >> cantidad;

vector<int> numeros_ingresados(cantidad);

for (int i = 0; i < cantidad; i++) {
cout << "Ingrese el numero " << i + 1 << ": ";
cin >> numeros_ingresados[i];
}
cout <<"Parejas: "<< "\n";
for (int i = 0; i < cantidad; i++) {

for (int j = 0; j < cantidad; j++) {
    
    if (i != j) {

   
    cout << "( " << numeros_ingresados[i] << ", " << numeros_ingresados[j] << " )"<< "\n";
    }
}
}





    return 0;
}

/*Este codigo es de complejidad cuadrática, ya que el numero de operaciones depende del cuadrado de la cantidad de numeros ingresados, 
ya que se comparan todos los numeros con todos los demás numeros.*/
