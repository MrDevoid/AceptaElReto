#include <iostream>
using namespace std;
const int MAX = 10000;
typedef int tVector[MAX];

//{Pre: 0<=tamano<longitud(v)}
int par(tVector v, int tamano){
	int a = 0;
	for (int i = 0; i < tamano; ++i){
		if (v[i] % 2 == 0)
			++a;
	}
	return a;
}           /* return a*/
//{Post:a= #i:0<=i<n:v[i]mod2=0}

int main(){
	int nc;
	tVector v;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		int tamano, pares;
		cin >> tamano;
		for (int j = 0; j < tamano; ++j){
			cin >> v[j];
		}
		pares = par(v, tamano);
		cout << pares << '\n';
		}
	return 0;
}