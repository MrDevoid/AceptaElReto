#include <iostream>
using namespace std;
const int MAX = 31;
typedef int tMatriz[3][3];

void iniciocalculadora(tMatriz & calculadora){
	calculadora[0][0] = 7;
	calculadora[0][1] = 8;
	calculadora[0][2] = 9;
	calculadora[1][0] = 4;
	calculadora[1][1] = 5;
	calculadora[1][2] = 6;
	calculadora[2][0] = 1;
	calculadora[2][1] = 2;
	calculadora[2][2] = 3;
}

void posicion(tMatriz & calculadora, int numero, int& filn, int& coln){
	int i = 0;
	int j = 0;
	bool encontrado = false;
	while (i < 3 && !encontrado){
		int j = 0;
		while (j < 3 && !encontrado){
			if (calculadora[i][j] == numero){
				filn = i;
				coln = j;
				encontrado = true;
			}
			++j;
		}
		++i;
	}
}

bool gana(tMatriz & calculadora, int suma, int numero, int filn, int coln){
	if (suma >= MAX) return false;
	int i = 0;
	while (i < 3){
		int j = 0;
		while (j < 3){
			if (i != filn && j == coln){
				if (gana(calculadora, suma + calculadora[i][j], calculadora[i][j], i, j)){
					return false;
				}
			}
			if (j != coln && i == filn){
				if (gana(calculadora, suma + calculadora[i][j], calculadora[i][j], i, j)){
					return false;
				}
			}
			++j;
		}
		++i;
	}
	return true;
}

void resuelve(){
	int suma, numero, filn, coln;
	cin >> suma >> numero;
	tMatriz calculadora;
	iniciocalculadora(calculadora);
	posicion(calculadora, numero, filn, coln);
	if (!gana(calculadora, suma, numero, filn, coln)) cout << "GANA\n";
	else cout << "PIERDE\n";
}

int main(){
	int nc;
	cin >> nc;
	for (int i =0 ; i < nc; ++i){ 
		resuelve();
	}
	return 0;
}