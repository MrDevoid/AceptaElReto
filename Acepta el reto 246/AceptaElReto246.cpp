#include <iostream>
using namespace std;


void esPolidivisible(int numDigitos, long long numero, int limite) {
	if (numDigitos <= limite && numero%numDigitos == 0) {
		cout << numero << '\n';
		for (int i = 0; i < 10; ++i) {
			esPolidivisible(numDigitos + 1, numero * 10 + i, limite);
		}
	}
}

int contarCifras(long long num) {
	int cont = 1;

	while (num / 10 != 0) {
		cont++;
		num /= 10;
	}

	return cont;
}

bool resuelveCaso() {

	long long num;
	int tam;

	cin >> num >> tam;

	if (!cin) {
		return false;
	}

	esPolidivisible(contarCifras(num), num, tam/*, num*/);
	cout << "---\n";
	return true;
}
int main() {

	while (resuelveCaso()) {}
	return 0;
}