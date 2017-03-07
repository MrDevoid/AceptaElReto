#include <iostream>
using namespace std;

int descomponersuma(int numero){
	int total=0;
	if (numero < 10) {
		cout << numero;
		return numero;
	}
	total=descomponersuma(numero/10)+numero%10;
	cout << " + " << numero % 10;
	return total;
}

int main() {
	int numero, total;
	cin >> numero;
	while (numero >= 0) {
		total = descomponersuma(numero);
		cout << " = " << total << '\n';
		cin >> numero;
	}
	return 0;
}