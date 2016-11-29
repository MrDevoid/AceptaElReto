#include <iostream>
using namespace std;

int total(int n) {
	if (n == 1) return 4;
	else return 4 * n + 4 * (total(n / 2));
}

int main() {
	int distancia;
	cin >> distancia;
	while (cin) {
		cout << total(distancia) << '\n';
		cin >> distancia;
	}
	return 0;
}