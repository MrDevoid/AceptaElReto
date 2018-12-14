#include <iostream>
using namespace std;
const int MAX = 200000;
typedef int tVector[MAX];

void crearvector(tVector ninos, int tamano) {
	for (int i = 0; i < tamano; ++i) {
		cin >> ninos[i];
	}
}

int cuantosninos(tVector ninos, int tamano) {
	int j = 1;
	int total = 1;
	int max = ninos[0];
	int Altninos = ninos[0];
	while (j < tamano) {
		if (ninos[j] > max) max = ninos[j];
		if (ninos[j] <= Altninos) {
			total = j+1;
			Altninos = max;
		}
		++j;
	}
	return total;
}

int main() {
	int tamano;
	tVector ninos;
	cin >> tamano;
	while (tamano != 0) {
		crearvector(ninos, tamano);
		cout << cuantosninos(ninos, tamano) << '\n';
		cin >> tamano;
	}
	return 0;
}