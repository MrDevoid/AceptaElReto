#include <iostream>
using namespace std;

int auxNumDigitos(int fin){
	int numDig = 0, cantidad = 9,patron=1, vueltas=1,aux=fin;
	while (aux >= 10){
		numDig += cantidad * patron*vueltas;
		patron *= 10;
		aux /= 10;
		++vueltas;
	}
	if ((fin - patron + 1)*(vueltas + 1)>0)
		numDig += (fin - patron + 1)*(vueltas);
	return numDig;
}

int numDigitos(int ini, int fin){
	return auxNumDigitos(fin) - auxNumDigitos(ini-1);
}

int pagina(int ini, int fin, int iniaux,int finaux){
	if (finaux-iniaux==0){
		return iniaux-1;
	}
	int m = (finaux + iniaux) / 2;
	if (numDigitos(ini, m) < numDigitos(m+ 1, fin))
		return pagina(ini, fin,m+1,finaux);
	else if (numDigitos(ini, m) > numDigitos(m+1, fin))
		return pagina(ini, fin,iniaux,m);
	else return m;
}

bool resuelve(){
	int ini, fin,suma=0;
	cin >> ini >> fin;
	if (ini == 0 && fin == 0) return false;

	cout << pagina(ini, fin,ini,fin) << '\n';
	return true;
}

int main(){
	while (resuelve());
	return 0;
}