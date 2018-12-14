#include <iostream>
#include <vector>
using namespace std;

void crearvectores(vector <int> &nacimientos){
	for (int i = 0; i < nacimientos.size(); ++i){
		cin >> nacimientos[i];
	}
}

int busquedabinaria(vector <int> &nacimientos, int numero){
	int ini = 0, fin = nacimientos.size() - 1, mitad = (ini + fin) / 2;
	while (ini < fin){
		if (nacimientos[mitad] < numero) ini = mitad + 1;
		else if (nacimientos[mitad]>numero)fin = mitad - 1;
		else return mitad;
		mitad = (ini + fin) / 2;
	}
	return mitad;
}

int comprob(vector <int> & nacimientos, int  contador, int i, int intervalo){
		while (contador < nacimientos.size() - 1 && nacimientos[contador + 1] - nacimientos[i] + 1<= intervalo){
		++contador;
	}
	if (contador < nacimientos.size()) return contador;
	else return nacimientos.size() - 1;
}

int sumamayor(vector <int> &nacimientos,int intervalo){
	int sumamayor = 1, sumaactual;
	int contador = busquedabinaria(nacimientos, (nacimientos[0] + intervalo - 1));
	contador = comprob(nacimientos, contador,0,intervalo);
	for (int i = 0; i < nacimientos.size(); ++i){
		contador = comprob(nacimientos, contador, i, intervalo);
		sumaactual = contador - i;
		if (nacimientos[contador] - nacimientos[i] + 1 <= intervalo) ++sumaactual;
		if (sumaactual > sumamayor) sumamayor = sumaactual;
	}
	return sumamayor;
}

int main(){
	int tamano, intervalo;
	cin >> tamano >> intervalo;
	while (tamano != 0 || intervalo != 0){
		vector <int> nacimientos(tamano);
		crearvectores(nacimientos);
		cout<<sumamayor(nacimientos, intervalo) << '\n';
		cin >> tamano >> intervalo;
	}
	return 0;
}