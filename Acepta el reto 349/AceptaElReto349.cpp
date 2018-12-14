#include <iostream>
using namespace std;



int calcula(){
	char c;
	cin >> c;
	if (c == '0') return 0;
	if (c == '1') return 1;
	if (c == '2') return 2;
	if (c == '3') return 3;
	if (c == '4') return 4;
	if (c == '5') return 5;
	if (c == '6') return 6;
	if (c == '7') return 7;
	if (c == '8') return 8;
	if (c == '9') return 9;

	if (c == '+') return calcula() + calcula();
	if (c == '*') return calcula() * calcula();
	if (c == '-') return calcula() - calcula();
	if (c == '/') return calcula() / calcula();
}

void resuelveCaso(){
	int nc;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		cout << calcula() << '\n';
	}
}

int main(){
	resuelveCaso();
	return 0;
}