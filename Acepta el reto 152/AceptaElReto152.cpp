#include <iostream>
#include <vector>
using namespace std;

bool introducirelementos(vector <int> & numeros) {
	bool ord = true;
	cin >> numeros[0];
	for (int i = 1; i < numeros.size(); ++i) {
		cin >> numeros[i];
		if (numeros[i] < numeros[i - 1]) ord = false;
	}
	return ord;
}

void ordenar(vector <int> & v) {
	for (int i = 1; i < v.size(); i++) {
		int temp = v[i];
		int j = i - 1;
		while ((j >= 0) && (v[j] > temp)) {
			v[j + 1] = v[j];
			j--;
			v[j + 1] = temp;
		}
	}
}

//{Pre: 1<=tamaño<longitud(v) && odr(v,n)}  {ord(v,n)= "para todo" i: 0<=i<v.size() v[i]<=v[i+1]
int moda(vector <int> & v) /*return mod*/{
	int frec = 1;
	int mod = v[0];
	int aux = 1;
	int contador = 1;

	//{I: (0<=contador<v.size()) && (freq(mod, v, n) = max :0<=i<contador freq(v[i],v,n)) && frec=freq(mod,v,n) && aux= freq(v[contador-1],v,n))}
	//{freq(valor, v, n)= #i:0<=i<j: v[i]=valor}
	while (contador < v.size()) {
		if (v[contador] == v[contador - 1]) ++aux;
		else aux = 1;

		if (aux > frec) {
			frec = aux;
			mod = v[contador];
		}
		++contador;
	}
	return mod;
}
//{Post: freq(mod, v, n)= max i:0<=i<n: freq(v[i],v,n)}

int main() {
	int tamano;
	cin >> tamano;
	while (tamano != 0) {
		vector <int> numeros(tamano);
		bool ord=introducirelementos(numeros);
		if (!ord) ordenar(numeros);
		cout << moda(numeros) << '\n';
		cin >> tamano;
	}


	return 0;
}