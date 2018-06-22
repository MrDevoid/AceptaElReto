#include <iostream>
using namespace std;
const int MAX = 5;
typedef int tVector[MAX];

bool func(tVector numero, int k, int acu, int n){
	if (acu == n && k==MAX) return true;
	if (k >= MAX) return false;

	int suma = acu + numero[k];
	int resta = acu - numero[k];
	int mul = acu*numero[k];
	int division=0;
	bool divisible=false;
	if (numero[k] != 0 && acu%numero[k] == 0){
		division = acu / numero[k];
		divisible = true;
	}
	
	++k;
	if (!func(numero, k, suma, n)){
		if (!func(numero, k, resta, n)){
			if (!func(numero, k, mul, n)){
				if (!divisible || (divisible && !func(numero, k, division, n))) return false;
			}
		}
	}
	return true;
}


bool resuelve(){
	int num;
	tVector numero;
	cin >> num;
	if (!cin) return false;

	for (int i = 0; i < MAX; ++i){
		cin >> numero[i];
	}
	if (func(numero, 1, numero[0], num)) cout << "SI\n";
	else cout << "NO\n";
	return true;
}

int main(){
	while (resuelve()){};
	return 0;
}