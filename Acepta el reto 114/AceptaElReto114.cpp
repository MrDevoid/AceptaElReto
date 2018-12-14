#include <iostream>
using namespace std;

int fact(int numero) {

	if (numero == 0) return 1;
	
	int multi = 1;
	int i = 1;
	while (i <= numero && multi!=0) {
		multi *= i;
		multi %= 10;
		++i;
	}
	return multi;
}

int main() {
	int nc, factorial;
	cin >> nc;
	for (int i = 0; i < nc; ++i) {
		cin >> factorial;
		cout<<fact(factorial)<<'\n';
	}
	return 0;
}