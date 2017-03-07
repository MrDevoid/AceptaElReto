#include <iostream>
#include <vector>
using namespace std;

void crearvector(vector <int> & examenes) {
	for (int i = 0; i < examenes.size(); ++i) {
		cin >> examenes[i];
	}
}

int numerocopias(vector <int> & examenes, vector <int> & aux, int & detectados, int intervalo) {
	int copias=0;
	int i = 0;
	while (i < examenes.size()) {
		if (aux[examenes[i]] >= 0) {
			if (i - aux[examenes[i]] <= intervalo)
				++detectados;
			++copias;
		}
		aux[examenes[i]] = i;		
		++i;
	}
	return copias;
}

int main() {
	int tamano, intervalo;
	cin >> tamano >> intervalo;
	while(cin) {
		int detectados = 0;
		vector <int> examenes(tamano);
		vector <int> copias(100001, -1);
		crearvector(examenes);
		cout << numerocopias(examenes, copias, detectados, intervalo) << " ";
		cout << detectados << '\n';
		cin >> tamano >> intervalo;
	}
	return 0;
}