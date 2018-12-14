#include <iostream>
#include <vector>
using namespace std;

void crearvector (vector<int>& positivos, int& suma, int &resta){
	int leido, cont=0, cont1=0;
	for (int i = 0; i < positivos.size(); ++i){
		cin >> leido;
		if (leido >= 0) suma += leido;
		else resta += leido;
		positivos[i] = leido;
	}
}

int abs(int numero){
	if (numero < 0) return -numero;
	else return numero;
}

int analisispositivos(vector <int>& positivos, int suma){
	int contador = 0, minimo = suma, pos = 0, auxiliar=suma, auxiliar2=0;
	while (contador < positivos.size()){
		auxiliar -= positivos[contador];
		auxiliar2 += positivos[contador];
		if (abs(auxiliar2 - auxiliar) < abs(minimo)){
			pos = contador + 1;
			minimo = abs(auxiliar2 - auxiliar);
		}
		++contador;
	}
	return pos;
}


void tratarcasos(vector <int> &positivos, int suma, int resta){
	if ((suma + resta) == 0) cout << "0\n";
	else cout << analisispositivos(positivos, suma+resta) << '\n';
}

int main(){
	int tamano;
	cin >> tamano;
	while (tamano != 0){
		vector <int> dias(tamano);
		int suma = 0, resta = 0;
		crearvector(dias,suma, resta);
		tratarcasos(dias, suma, resta);
		cin >> tamano;
	}

	return 0;
}