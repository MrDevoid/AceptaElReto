#include <iostream>
using namespace std;


//{Pre: 0<=n}
int calculopotencia(int x, int n) /*return ret*/ {
	int aux = 1;
	int ret = 1;
	int i = 0;

	//{I: (ret= "sumatorio" j:0<=j<=i: aux) && (0<=i<n) && (aux = "producto" j: 0<=j<=i: x%10000007)}
	while (i < n) {
		aux *= x;
		aux %= 1000007;
		ret += aux;
		ret %= 1000007;
		++i;
	}
	return ret;
}
//{Post: ret=  "sumatorio" i:0<=i<=n: x^i%1000007}

int main() {

	int n, x;
	cin >> x >> n;
	while (cin) {
		cout << calculopotencia(x, n) << '\n';
		cin >> x >> n;
	}
	return 0;
}