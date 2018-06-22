#include <iostream>
using namespace std;

int cuantosTrozos(int fuerza,int tamano) {
	if (tamano <= fuerza)
		return 0;
	int tamP = tamano / 3;
	int tamG = tamano - tamP;
	int trozosP = cuantosTrozos(fuerza, tamP);
	int trozosG = cuantosTrozos(fuerza, tamG);
	return trozosP + trozosG + 1;
}

bool resuelveCaso() {
	int fuerza, tamano;
	cin >> fuerza >> tamano;
	fuerza *= 2;
	if (fuerza == 0) return false;

	int total=cuantosTrozos(fuerza, tamano);
	cout << total << '\n';
	return true;
}

int main() {
	while(resuelveCaso()){}
	return 0;
}