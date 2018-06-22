#include <iostream>

using namespace std;

int main(){

	int nCasos;

	cin >> nCasos;

	for (int i = 0; i < nCasos; i++){

		int muros;

		cin >> muros; 
		int saltosAbajo = 0, saltosArriba = 0, alturaMuros, max;

		cin >> alturaMuros;
		max = alturaMuros;

		for (int j = 0; j < muros-1; j++){

			cin >> alturaMuros;

			if (alturaMuros > max) saltosArriba++;
			else if (alturaMuros < max) saltosAbajo++;
			max = alturaMuros;
		}
		cout << saltosArriba << " " << saltosAbajo << '\n';
		
	}
	return 0;
}