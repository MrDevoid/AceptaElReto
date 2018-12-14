#include <iostream>
using namespace std;
const int MAX = 100000;
typedef int tVector[MAX];

void crearvector(tVector v, int n){
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
}

//{Pre: 0<n<=longitud(v)}
int suma(tVector v, int n)/*return suma*/{
	int suma = 0;
	int j = 0;

	//{I: (j<n) && (suma= "sumatorio" i: 0<=i<j: v[i])}
	//{Funcion cota: n-j}
	while (j < n){
		suma += v[j];
		++j;
	}
	return suma;
}
//{Post: suma="sumatorio" i: 0<=i<n: v[i];

//{Pre: 0<n<=longitud(v) && suma="sumatorio" i:0<=i<n: v[i]}
int cuantas(tVector v, int n, int suma){
	int j = 0;
	int cont = 0;
	int izq = 0;
	int der = suma;
	if (suma == 0) ++cont;

	while (j < n){
		izq += v[j];
		der -= v[j];
		if (izq == der) ++cont;
		++j;
	}
	return cont;
}
//{Post: cont= #i:0<=i<n: suma(v,0,i)==suma(v,i,n)}
//{suma(v,ini,fin): "sumatorio" i: ini<=i<fin: v[i]}

int main(){
	int tamano;
	cin >> tamano;
	tVector v;
	while (tamano != 0){
		crearvector(v,tamano);
		cout << cuantas(v, tamano, suma(v, tamano)) << '\n';
		cin >> tamano;
	}
	return 0;
}