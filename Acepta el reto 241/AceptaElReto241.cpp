#include <iostream>
using namespace std;
int main(){
	int nc = 0; int treboles = 0; int sol = 0;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		cin >> treboles;
		sol = treboles % 3;
			if (treboles == 0 || treboles == 5 || treboles == 1 || treboles == 2)
				cout << "IMPOSIBLE" << '\n';
			else if (sol == 0)
				cout << "0" << '\n';
			else if (sol == 1)
				cout << "1" << '\n';
			else cout << "2" << '\n';
	}
	return 0;
}