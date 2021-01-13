#include <iostream>		//libreria estandar 
#include <iomanip>		//arreglos
#include <fstream>		//lectura y escritura de archivos
#include <string>		//datos de cualquier tipo 
#include <time.h>		//numeros aleatorios, para el NULL
#include <stdlib.h>		//para la matriz
#include <math.h>
using namespace std;
int Nusuario, numero, cubo;
char opc;
main() {
	system("color 3f");//	colores para la ventana de comandos

	do {
		cout << "Hola, buen dia\n";
		cout << "El siguiente programa sirve para hacer un horario de clases\n";
		cout << "Las siguientes opciones son:\n";
		cout << "\t1. nuevo usuario\n";
		cout << "\t2. usuario antiguo\n";
		cout << "\t3. Instrucciones del programa\n";
		cout << "\t4. hacer un nuevo horario\n";
		cout << "\t5. salir\n";//bye bye
		cout << "Elija la opcion que prefiera:\t";
		cin >> opc;
		system("cls");
	} while (!((opc == '1') || (opc == '2') || (opc == '3') || (opc == '4') || (opc == '5')));

	switch (opc) {

		case '1':
			cout << "\nDigite un numero: ";
			cin >> numero;
			cubo = pow(numero, 3); //elevamos el numero al cubo
			cout << "El cubo del numero es: " << cubo;
			break;
		case '2':
			cout << "\nDigite un numero: ";
			cin >> numero;

			if (numero % 2 == 0) {
				cout << "El numero es par";
			} else {
				cout << "El numero es impar";
			}
			break;
		case '3':
			cout << "Instrucciones del programa\n";
			break;

	}


	system("pause");//		para que el ejecutable no se cierre automatico
}
