#include <iostream>
#include <vector>
using namespace std;

void crearmatriz(vector < vector <int>> & matriz, bool & esoterico) {
	int elemento = 0;
	vector <bool> comprobar(matriz.size()*matriz.size(), false);
	for (unsigned int filas = 0; filas < matriz.size(); ++filas) {
		for (unsigned int columnas = 0; columnas < matriz[0].size(); ++columnas) {
			cin >> elemento;
			matriz[filas][columnas] = elemento;
			if (elemento<0 || elemento>matriz.size()*matriz.size() || comprobar[elemento - 1]) esoterico = false;
			else comprobar[elemento - 1] = true;
		}
	}
}

int calcularCM(const vector < vector <int>> & matriz) {
	int suma = 0;
	for (unsigned int fila = 0; fila < matriz.size(); ++fila) {
		suma += matriz[fila][matriz.size() - 1 - fila];
	}
	return suma;
}

int sumarfila(const vector < vector <int>> & matriz, int fila) {
	int suma = 0;
	for (unsigned int columna = 0; columna < matriz[0].size(); ++columna) {
		suma += matriz[fila][columna];
	}
	return suma;
}

int sumarcolumna(const vector < vector <int>> & matriz, int columna) {
	int suma = 0;
	for (unsigned int fila = 0; fila < matriz[0].size(); ++fila) {
		suma += matriz[fila][columna];
	}
	return suma;
}

bool hacercuentas(const vector < vector <int>> & matriz, int & posicion, int & sumadiagonal, int constantemagica) {
	if (sumarfila(matriz, posicion) == constantemagica) {
		if (sumarcolumna(matriz, posicion) == constantemagica) {
			sumadiagonal += matriz[posicion][posicion];
		}
		else return false;
	}
	else return false;
	++posicion;
	return true;
}

bool comprobardiabolica(const vector < vector <int>> & matriz, int constantemagica) {
	int posicion = 0, sumadiagonal = 0;
	if (hacercuentas(matriz, posicion, sumadiagonal, constantemagica)) {
		while (posicion < matriz.size() && hacercuentas(matriz, posicion, sumadiagonal, constantemagica)) {}
		if (sumadiagonal == constantemagica && posicion >= matriz.size()) return true;
	}
	return false;
}

bool sumaesquinas(const vector < vector <int>> & matriz, int constantemagica2) {
	int suma = matriz[0][0] + matriz[0][matriz.size() - 1] + matriz[matriz.size() - 1][0] + matriz[matriz.size() - 1][matriz.size() - 1];
	return suma == constantemagica2;
}

bool sumalaterales(const vector < vector <int>> & matriz, int constantemagica2) {
	int posicioncentro = matriz.size() / 2, suma = 0;
	if (matriz.size() % 2 == 0) {
		int posicioncentro2 = posicioncentro - 1;
		suma = matriz[0][posicioncentro] + matriz[0][posicioncentro2] + matriz[posicioncentro][0] + matriz[posicioncentro2][0] + matriz[posicioncentro][matriz.size() - 1] + matriz[posicioncentro2][matriz.size() - 1] + matriz[matriz.size() - 1][posicioncentro] + matriz[matriz.size() - 1][posicioncentro2];
		suma = suma / 2;
	}
	else suma = matriz[0][posicioncentro] + matriz[posicioncentro][0] + matriz[posicioncentro][matriz.size() - 1] + matriz[matriz.size() - 1][posicioncentro];
	return suma == constantemagica2;
}

bool sumacentro(const vector < vector <int>> & matriz, int constantemagica2) {
	int posicioncentro = matriz.size() / 2, suma = 0;
	if (matriz.size() % 2 == 0) {
		int posicioncentro2 = posicioncentro - 1;
		suma = matriz[posicioncentro][posicioncentro] + matriz[posicioncentro][posicioncentro2] + matriz[posicioncentro2][posicioncentro] + matriz[posicioncentro2][posicioncentro2];
	}
	else suma = 4 * matriz[posicioncentro][posicioncentro];
	return suma == constantemagica2;
}

bool comprobaresoterica(const vector < vector <int>> & matriz, int constantemagica2) {
	if (sumaesquinas(matriz, constantemagica2)) {
		if (sumalaterales(matriz, constantemagica2)) {
			if (sumacentro(matriz, constantemagica2))
				return true;
			else return false;
		}
		else return false;
	}
	else return false;
}

int main() {
	int tamano = 0, CM = 0, CM2 = 0;
	cin >> tamano;
	while (tamano != 0) {
		bool esoterico = true;
		vector<vector <int>> matriz(tamano, vector<int>(tamano));
		crearmatriz(matriz, esoterico);
		CM = calcularCM(matriz);
		CM2 = 4 * CM / tamano;
		if (comprobardiabolica(matriz, CM)) {
			if (comprobaresoterica(matriz, CM2) && esoterico)
				cout << "ESOTERICO\n";
			else cout << "DIABOLICO\n";
		}
		else cout << "NO\n";
		cin >> tamano;
	}
	return 0;
}