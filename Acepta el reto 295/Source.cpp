#include <iostream>
using namespace std;
const int MOD = 31543;

int potencia(int x, int n) {
	if (n == 0) return 1;
	int pot = potencia(x, n / 2);

	if (n % 2 == 0) return (pot*pot) % MOD;
	else return (((pot*pot) % MOD)*x) % MOD;
}

bool resuelve() {
	int x, n;
	cin >> x >> n;
	if (x == 0 && n == 0) return false;

	x %= MOD;
	cout << potencia(x, n) << '\n';
	return true;
}

int main() {
	while (resuelve()){}
	return 0;
}