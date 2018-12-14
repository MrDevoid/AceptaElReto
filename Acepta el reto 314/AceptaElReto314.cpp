#include <iostream>
using namespace std;

const int MAX = 10000;
typedef int temp[MAX];

// { Pre: 0 <= n <= longitud(a) }
int pico(temp a, int n) /*return numPicos*/{
	int numPicos = 0;
	for (int i = 1; i < n - 1; i++){
		if (a[i] > a[i + 1] && a[i] > a[i - 1]) numPicos++;
	}
	return numPicos;
}
// { Post: numPicos = #i: 1 <= i < n - 1: a[i] > a[i + 1] && a[i] > a[i - 1] }

// { Pre: 0 <= n <= longitud(a) }
int valle(temp a, int n) /*return numValles*/{
	int numValles = 0;
	for (int i = 1; i < n - 1; i++){
		if (a[i] < a[i + 1] && a[i] < a[i - 1]) numValles++;
	}
	return numValles;
}
// { Post: numPicos = #i: 1 <= i < n - 1: a[i] < a[i + 1] && a[i] < a[i - 1] }

int main(){

	int nCasos;

	cin >> nCasos;

	for (int i = 0; i < nCasos; i++){

		int n;
		temp a;
		cin >> n;
		for (int j = 0; j < n; j++){
			cin >> a[j];
		}
		cout << pico(a, n) << ' ' << valle(a, n) << '\n';
	}
	return 0;
}