#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> totalestu;
	int tamano;
	cin >> tamano;
	while (tamano != 0) {
		totalestu.resize(tamano);
		long long int total = 0;
		int aux;
		for (int i = 0; i < tamano; ++i) {
			cin >> aux;
			totalestu[i] = aux;
			total += aux;
		}
		long long int parejas = 0;
		for (int i = 0; i < tamano; ++i) {
			total -= totalestu[i];
			parejas += total*totalestu[i];
		}
		cout <<parejas<<'\n';
		cin >> tamano;
	}
	return 0;
}