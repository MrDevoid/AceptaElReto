#include <iostream>
using namespace std;

bool impar(int numero){
	if (numero % 2 != 0) return true;
	else return false;
}


int main(){
	int numero;
	cin >> numero;
	while (numero!=0){
		if (impar(numero)) cout << "IZQUIERDA\n";
		else cout << "DERECHA\n";
		cin >> numero;
	}
	
	return 0;
}