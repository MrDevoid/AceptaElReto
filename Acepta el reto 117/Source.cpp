#include <iostream>
#include <string>
using namespace std;

int main(){

	int nCasos;

	cin >> nCasos;

	string soy, nombre;
	for (int i = 0; i < nCasos; ++i){

		cin >> soy >> nombre;

		cout << "Hola, " << nombre << ".\n";
	}

	return 0;
}
