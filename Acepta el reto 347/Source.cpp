#include <iostream>
using namespace std;

int calcularPajaritas(int alto, int ancho) {
	if (alto < 10 || ancho < 10) {
		return 0;
	}
	if (alto >= ancho) return alto / ancho + calcularPajaritas(ancho, alto%ancho);
	else return ancho / alto + calcularPajaritas(alto, ancho%alto);
}

bool resuelve() {
	int alto, ancho;
	cin >> alto >> ancho;
	if (alto == 0 && ancho == 0) return false;

	 cout<<calcularPajaritas(alto, ancho)<<'\n';
	 return true;
}

int main() {
	while (resuelve()){}
	return 0;
}