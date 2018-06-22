#include <iostream>
using namespace std;

int abs(int n, int k){
	if (n - k >= 0) return n - k;
	else return k - n;
}

int main(){
	int nc;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		int alto, ancho,totalcerillas=0;
		cin >> alto >> ancho;
		while (alto > 0 && ancho > 0){
			totalcerillas += 2 * alto + 2 * ancho;
			--ancho;
			--alto;
		}
		totalcerillas += abs(alto, ancho);
		cout << totalcerillas << '\n';
	}

	return 0;
}