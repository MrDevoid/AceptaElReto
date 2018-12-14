#include <iostream>
using namespace std;

int divide(int numero) {
	if (numero == 0) return 0;
	return 1 + divide(numero / 2);
}

bool resuelve() {
	int numero;
	cin >> numero;
	if (!cin) return false;

	cout<<divide(numero)<<'\n';
	return true;
}

int main() {
	while(resuelve()){}
	return 0;
}