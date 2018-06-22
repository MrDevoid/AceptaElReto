#include <iostream>
using namespace std;
int main(){
	int largo = 0, ancho = 0, distancia = 0;
	cin >> largo >> ancho >> distancia;
	while (largo != 0 || ancho != 0 || distancia != 0){
		int postes = 4;

		if (largo > distancia) {
			postes += 2 * (largo / distancia);
			if (largo%distancia == 0) postes = postes - 2;
		}

		if (ancho > distancia){
			postes += 2 * (ancho / distancia);
			if (ancho%distancia == 0) postes = postes - 2;
	}
	
		cout << postes << '\n';
		
		cin >> largo >> ancho >> distancia;
	}
	
	return 0;
}