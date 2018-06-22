#include <iostream>
using namespace std;

bool esPolidivisible(long long n, int &aux) {
	if (n < 10) {
		aux = 1;
		return true;
	}
	bool polidivisible = esPolidivisible(n / 10, aux);
	++aux;
	return polidivisible && n%aux == 0;
}

bool esPolidivisible(long long n) {
	int aux;
	return esPolidivisible(n, aux);
}

int main() {
	long long numero;
	cin >> numero;
	while (cin) {
		if (esPolidivisible(numero)) cout << "POLIDIVISIBLE\n";
		else cout << "NO POLIDIVISIBLE\n";
		cin >> numero;
	}
	return 0;
}