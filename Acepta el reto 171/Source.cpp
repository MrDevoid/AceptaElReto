#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100000;
using tVector = int[MAX];


//Funcion que introduce elementos en el array
void introducirElementos(tVector vector, int tamano){
	for (int i = 0; i < tamano; ++i){
		cin >> vector[i];
	}
}

//Funcion que cuenta el maximo de casas posibles
int casas(tVector vector,int tamano){
	int casas = 0;
	int ultimag = 0;
	for (int i = tamano - 1; 0 <= i; --i){
		if (vector[i] > ultimag){
			ultimag = vector[i];
			++casas;
		}
	}
	return casas;
}

int main(){
	tVector montanas;
	int tamano;
	cin >> tamano;
	while (tamano != 0){
		introducirElementos(montanas, tamano);		
		cout <<casas(montanas,tamano)<<'\n';
		cin >> tamano;
	}
	return 0;
}