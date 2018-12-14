#include <iostream>
using namespace std;

bool equilibrado(int p1, int d1, int p2, int d2, int &suma) {
	bool equii = true, equid = true;
	//CASO BASE
	if (p1 != 0 && p2 != 0) {
		if (p1*d1 == p2*d2) {
			suma = p1 + p2;
			return true;
		}
		else return false;
	}
	//CASO RECURSIVO
	if (p1 == 0) {
		int p1a, d1a, d2a, p2a;
		cin >> p1a >> d1a >> p2a >> d2a;
		equii = (equilibrado(p1a, d1a, p2a, d2a, suma));
		p1 = suma;
	}
	if (p2 == 0) {
		int p1a, d1a, d2a, p2a;
		cin >> p1a >> d1a >> p2a >> d2a;
		equid = (equilibrado(p1a, d1a, p2a, d2a, suma));
		p2 = suma;
	}
	suma = p1 + p2;
	return(equii && equid && p1*d1 == p2*d2);
}

bool resuelveCaso() {
	int p1, p2, d1, d2, aux = 0;
	cin >> p1 >> d1 >> p2 >> d2;
	if (p1 == 0 && d1 == 0 && p2 == 0 && d2 == 0) return false;

	if (equilibrado(p1, d1, p2, d2, aux)) cout << "SI\n";
	else cout << "NO\n";
	return true;
}

int main() {
	while (resuelveCaso()) {}
	return 0;
}
