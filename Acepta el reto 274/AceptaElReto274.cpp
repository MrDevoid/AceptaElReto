#include <iostream>
using namespace std;
int main(){
	int diaano = 0; int diasemana = 0; int semana = 0; int nc = 0; int sol = 0;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		cin >> diaano >> semana >> diasemana;
		if (diasemana == 1){
			sol = (diaano / semana);
		}
		else{
			sol = (diaano - (semana - (diasemana-1)))/ semana;
		}
		cout << sol << '\n';
	}
	return 0;
}