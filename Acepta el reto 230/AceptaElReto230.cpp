#include <iostream>
#include <vector>
using namespace std;

long long mezcla(vector <int> &v, vector <int> &aux2,vector <int> &aux){
	long long inversiones = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < v.size() && j < aux2.size()) {
		if (v[i] <= aux2[j]) {
			aux[k] = v[i];
			inversiones += j;
			++i;
		}
		else {
			aux[k] = aux2[j];
			++j;
		}
		++k;
	}
	while (i <v.size()) {
		aux[k] = v[i];
		inversiones += j;
		++i;
		++k;
	}
	while (j < aux2.size()){
		aux[k] = aux2[j];
		++j;
		++k;
	}
	return inversiones;
}

long long totalInversiones(vector <int> & v,vector <int> &aux, int a, int b,int c){
	long long inversiones = 0;
	if (b - a <= 1) {
		aux[0] = v[a];
		return inversiones;		
	}
	
	vector <int> aux2(c-a);
	vector <int> aux3(b-c);
	inversiones +=totalInversiones(v,aux2, a, c,(c+a)/2);
	inversiones +=totalInversiones(v,aux3, c, b,(b+c)/2);
	inversiones += mezcla(aux2, aux3, aux);
	return inversiones;
}

bool resuelve() {
	int tamano;
	cin >> tamano;
	if (tamano == 0) return false;

	vector<int> v(tamano);
	vector<int> aux(tamano);

	for (int i = 0; i < tamano; ++i) {
		cin >> v[i];
	}
	cout << totalInversiones(v,aux,0,v.size(),v.size()/2) << '\n';
	return true;
}

int main() {
	while (resuelve()){}
	return 0;
