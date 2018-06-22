#include <iostream>
using namespace std;
int main(){
	int nc = 0; int lado1 = 0; int lado2 = 0; int lado3 = 0; int f1 = 0; int f2 = 0;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		cin >> lado1 >> lado2 >> lado3;
		if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)){

			if (lado1 >= lado2 && lado1 >= lado3){
				f1 = lado1*lado1;
				f2 = lado2*lado2 + lado3*lado3;

				if (f1 < f2)
					cout << "ACUTANGULO" << '\n';
				else if (f1>f2)
					cout << "OBTUSANGULO" << '\n';
				else cout << "RECTANGULO" << '\n';
			}

			else if (lado2 >= lado1 && lado2 >= lado3){
				f1 = lado2*lado2;
				f2 = lado1*lado1 + lado3*lado3;

				if (f1 < f2)
					cout << "ACUTANGULO" << '\n';
				else if (f2 < f1)
					cout << "OBTUSANGULO" << '\n';
				else cout << "RECTANGULO" << '\n';
			}
			else if (lado3 >= lado1 && lado3>=lado2){
				f1 = lado3*lado3;
				f2 = lado1*lado1 + lado2*lado2;

				if (f1 < f2)
					cout << "ACUTANGULO" << '\n';
				else if (f2 < f1)
					cout << "OBTUSANGULO" << '\n';
				else cout << "RECTANGULO" << '\n';
			}
		}
			else cout << "IMPOSIBLE" << '\n';
	}
	return 0;
}