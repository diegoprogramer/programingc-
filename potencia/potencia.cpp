#include <iostream>
#include <string>
using namespace std;
void main() {
	float potencia(int base, int exponente);
	string potenciaString(int base, int exponente);
	void write(string text);
	void menu();
	void potenciaOperation();
	void factorial();
	int opc =1;
	//codigo para hacer una potencia

		while(opc != 3){
		write("*******************MENU ******************** \n *****************\n ****1.Factorial \n**** 2. Potencia \n *****3.Salir****");
		write("\n");
		std::cin >> opc;

		opc ==2?
		potenciaOperation(): opc ==1?
		factorial():write("Salir...");
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

// funtion for get proccess of potencia
void potenciaOperation() {
	float potencia(int base, int exponente);
	string potenciaString(int base, int exponente);
	int base;
	int exponente;
	char opc = 's';

	while (opc == 's') {

		std::cout << "Digite el numero de la base: ";
		std::cin >> base;
		// call to function potencia
		std::cout << "Digite el numero del exponente: ";
		std::cin >> exponente;
		//cout<<" la potencia es "<<potencia(base, exponente);
		float potenciaa = 1;
		for (int inicio = 1; inicio <= exponente; inicio++) {
			potenciaa = potenciaa * base;
		}
		std::cout << " la potencia es " << potenciaa;
		std::cout << " \n Llamado a la funcion: " << potencia(base, exponente);

		std::cout << "\n call to PotenciaString: " << potenciaString(base, exponente);
		std::cout << " \n Desea continuar s/n : ";
		std::cin >> opc;
	}
}

	// factorial
	void factorial() {
		int factorial;
		float getFactorial(int element);
		char opc = 's';
		string cad;
		while(opc == 's'){
			cad = "";
		std::cout << "Digite el numero del factorial: ";
			std::cin >> factorial;
			for (int indice = 1; indice <= factorial; indice++) {
				indice == factorial?
				cad = cad+to_string(indice)	:
				cad = cad +to_string(indice)+" * ";

			}

			cout << " \n "<<cad<<" = "<<to_string(getFactorial(factorial))<<"\n";
			
			std::cout << "Desea continuar s/n: ";
			std::cin >> opc;
		}

	}
	
	// get factorial
	float getFactorial(int element) {
		float resul = 1;
		for (int indice = 1; indice <= element; indice++) {
			resul = resul * indice;

		}
	return resul;
	}

	//vodi menu
	void write(string text) {
		std::cout <<text;
		
	}





