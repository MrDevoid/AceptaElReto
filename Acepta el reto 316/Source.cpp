#include <iostream>
using namespace std;
const int MAX = 100000;
typedef int tVector[MAX];

void crearvector(tVector poker, int tamano){
	for (int i = 0; i < tamano; ++i){
		cin >> poker[i];
	}
}

void mejorracha(tVector poker,int tamano){
	int i = 0;
	int j = 0;
	int mejorRacha = 0;
	int rachaActual = 0;
	int tiempoRacha = tamano;
	int ini = 0;
	int fin = 0;
	while (i < tamano){
		while ((poker[j] <= 0 || rachaActual <= 0) && j < i){
			rachaActual -= poker[j];
			++j;			
		}
		rachaActual += poker[i];
		if (rachaActual >= mejorRacha){
			if (rachaActual > mejorRacha){
				mejorRacha = rachaActual;
				tiempoRacha = i - j + 1;
				ini = j + 1;
				fin = i + 1;
			}
			else {
				if (i - j + 1 < tiempoRacha){
					mejorRacha = rachaActual;
					tiempoRacha = i - j + 1;
					ini = j+1;
					fin = i+1;
				}
			}
		}		
		++i;
	}
	cout << ini << " " << fin << '\n';
}

int main(){
	int nc;
	tVector poker;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		int tamano;
		cin >> tamano;
		crearvector(poker,tamano);
		mejorracha(poker, tamano);
	}
	return 0;
}