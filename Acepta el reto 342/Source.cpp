#include <iostream>
using namespace std;

bool mentiroso(int ini, int fin, int numero) {
	int numeroCasos;
	cin >> numeroCasos;
	for (int i = 0; i < numeroCasos; ++i) {
		int prueba;
		cin >> prueba;
		if (prueba <= numero && prueba > ini) ini = prueba;
		else if (prueba > numero && prueba < fin) fin = prueba;
	}
	return (fin - ini) > 1;
}

bool resuelve() {
	int ini, fin, numero;
	cin >> ini >> fin >> numero;
	if (ini == 0 && fin == 0 && numero == 0) return false;

	if (!mentiroso(ini, fin+1, numero)) cout << "LO SABE\n";
	else cout << "NO LO SABE\n";
	return true;
}

int main() {
	while (resuelve()){}
	return 0;
}