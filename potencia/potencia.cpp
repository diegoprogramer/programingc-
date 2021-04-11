#include <iostream>
#include <string>
using namespace std;
void main() {
	float potencia(int base, int exponente);
	string potenciaString(int base, int exponente);

	//codigo para hacer una potencia

	int base;
	int exponente;
	char opc = 's';

	while (opc == 's') {

	cout << "Digite el numero de la base: ";
	cin >> base;
	// call to function potencia
	cout << "Digite el numero del exponente: ";
	cin >> exponente;
	//cout<<" la potencia es "<<potencia(base, exponente);
	float potenciaa = 1;
	for (int inicio = 1; inicio <= exponente; inicio++) {
		potenciaa = potenciaa * base;
	}
	cout << " la potencia es " << potenciaa;
	cout << " \n Llamado a la funcion: " << potencia(base, exponente);

	cout << "\n call to PotenciaString: " << potenciaString(base,exponente);
	cout << " \n Desea continuar s/n : ";
	cin >> opc;

	}



}

float potencia(int base, int exponente) {
	float potenciaa = 1;
	for (int inicio = 1; inicio <= exponente; inicio++) {
		potenciaa = potenciaa * base;
	}
	return potenciaa;
}

string potenciaString(int base, int exponente) {
	string cad = " ";
	for (int indice = 1; indice <= exponente; indice++) {
		if(indice <exponente)
		cad = cad + to_string(base) + " * ";
		else {
			cad = cad + to_string(base);
		}
	}
	return cad+" = "+ to_string(potencia(base,exponente));
}





