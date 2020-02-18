// Equ2Gado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Daniel Reyes Santiago
#include <iostream>
#include "BiblioEcu2Grado.h"


using namespace std;

//variables globales

double a, b, c;
double x1, x2;
int numSols;
void pedirCoeficientes(double&, double&, double&);
void presentarResultados(double, double, double, int, double&, double&);
int main()
{
	pedirCoeficientes(a, b, c);
	numSols = calcularResultados(a, b, c, x1, x2);
	presentarResultados(a, b, c, numSols, x1, x2);

	//cout << "El numero de soluciones es:" << numSols << "\n";

	//cout << "El valor de la solución x1 es:" << x1 << "\n";
	/*
	cout << "El valor del coeficiente a es" << a <<"\n";
	cout << "El valor del coeficiente a es" << b <<"\n";
	cout << "El valor del coeficiente a es" << c <<"\n";
	*/
}

void pedirCoeficientes(double& oa, double& ob, double& oc)
{
	
	do {
		cout << "Introduzca el valor del coeficiente a:";
		std::cin >> oa;
		if (a == 0) {
			cout << "ERROR, el coeficiente a no puede ser 0" << "\n";
		}
	} while (a == 0);

	cout << "Introduzca el valor del coeficiente b:";
	std::cin >> ob;
	cout << "Introduzca el valor del coeficiente c:";
	std::cin >> oc;



}

void presentarResultados(double ia, double ib, double ic, int inumSols, double& ox1, double& ox2) {
	cout << "La ecuación con coeficienes a = " << ia << " b= " << ib << " c= " << ic << endl;
	if (inumSols == 0) {
		cout << "No tiene solución";
	}
	else if (inumSols == 1) {
		cout << "Esta ecuación tiene una solucion y es x1= " << ox1 << "\n";
	}
	else {
		cout << "Esta ecuación tiene dos soluciones y són: " << "x1= " << ox1 << " y x2= " << ox2 << "\n";
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
