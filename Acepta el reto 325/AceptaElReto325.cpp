#include <iostream>
#include <string>
using namespace std;


string mostrarCombinaciones(int chocolate, int vainilla,string cadena){
	string aux;
	if (chocolate == 0){
		aux = cadena;
		for (int i = 0; i < vainilla; ++i)
			 aux +="V";
		aux += " ";
	}

	else if (vainilla == 0){
		aux = cadena;
		for (int i = 0; i < chocolate; ++i){
			aux += "C";
		}
		aux += " ";
	}
	else  {
			aux+=mostrarCombinaciones(chocolate - 1, vainilla,cadena+"C");
			aux+=mostrarCombinaciones(chocolate, vainilla-1,cadena+"V");
	}
	return aux;
}

void resuelveCaso(){
	int nc;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		int chocolate, vainilla;
		cin >> chocolate >> vainilla;
		string aux=mostrarCombinaciones(chocolate,vainilla,"");
		cout << aux.substr(0, aux.size() - 1);
		cout << '\n';
	}

}
int main(){
	resuelveCaso();
	return 0;
}