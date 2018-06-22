#include <iostream>
using namespace std;
int main(){
	int coordenada1 = 0, coordenada2 = 0, coordenada3 = 0, coordenada4 = 0, area = 0;
	cin >> coordenada1 >> coordenada2 >> coordenada3 >> coordenada4;
	while (coordenada1<=coordenada3 && coordenada2<=coordenada4){
		area = (coordenada3 - coordenada1) * (coordenada4 - coordenada2);
		cout << area << '\n';
		cin >> coordenada1 >> coordenada2 >> coordenada3 >> coordenada4;
	}
	return 0;
}