
#include <iostream>
using namespace std;

int main() {

    int numeros;
    int mayor, menor;
    int cantidad;

    cout << "Cuantos numeros desea ingresar? ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros;

        if (i == 0) {
            // Primer número inicializa mayor y menor
            mayor = numeros;
            menor = numeros;
        } else {
            if (numeros > mayor) {
                mayor = numeros;
            }
            if (numeros < menor) {
                menor = numeros;
            }
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}


/*Este codigo es de complejidad LINEAL, ya que el numero de operaciones depende de la cantidad de numeros ingresados, 
a medida que se ingresan mas numeros, se realizan mas operaciones para comparar cada numero con el mayor y menor actual.*/
