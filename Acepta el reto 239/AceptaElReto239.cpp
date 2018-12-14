#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long long int dias = 0, emisoras = 0, diastotal = 0, horas = 0, minutos = 0, segundos = 0, aux = 0;
	cin >> dias >> emisoras;
	while (dias != 0 || emisoras != 0){
		aux = (dias * 24 * 6 * emisoras);
		segundos = aux % 60;
		minutos = (aux / 60) % 60;
		horas = (aux / 3600) % 24;
		diastotal = aux / 86400;
		cout << setfill('0') << setw(1) << diastotal << ":" << setfill('0') << setw(2) << horas << ":" << setfill('0') << setw(2) << minutos << ":" << setfill('0') << setw(2) << segundos << '\n';
		cin >> dias >> emisoras;
	}

	return 0;
}