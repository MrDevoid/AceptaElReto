#include <iostream>
#include <string>
#include <vector>
using namespace std;
void mostrarDia(int numdia){
	switch (numdia){
	case 0: cout << "L "; break;
	case 1: cout << "M "; break;
	case 2: cout << "X "; break;
	case 3: cout << "J "; break;
	case 4: cout << "V "; break;
	case 5: cout << "S "; break;
	case 6: cout << "D "; break;
	}

}
int main(){
	int nc = 0;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		int semanas = 0, min = 0, numdia = 0; string cuadropastillas = "", aux = ""; vector <int> cuenta(7, 0);
		cin >> semanas;
		for (int j = 0; j < semanas; ++j){
			cin >> cuadropastillas;
			for (int k = 0; k < 7; ++k){
				if (cuadropastillas[k] == '*')
					++cuenta[k];
			}
		}
		min =cuenta[0]+1;
		for (int c = 1;c<cuenta.size();++c){
			if ((cuenta[c]+1)< min){
				min = cuenta[c]+1;
				numdia = c;
			}
		}
		mostrarDia(numdia);
		cout << min << '\n';
	}
	return 0;
}