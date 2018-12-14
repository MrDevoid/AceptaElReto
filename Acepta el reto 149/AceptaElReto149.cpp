#include <iostream>
#include <vector>
using namespace std;

bool resuelveCaso(int &tamano){
	cin >> tamano;
	if (!cin) return false;
	else return true;
}

int main(){
	vector<int> toros;
	int tamano;
	while (resuelveCaso(tamano)){
		int numero, max = 0;
		for (int i = 0; i < tamano;++i){
			cin >> numero;
			if (numero > max)max = numero;
	}
		cout << max << '\n';
	}
	return 0;
}