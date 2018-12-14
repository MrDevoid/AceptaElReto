#include <iostream> 
#include <iomanip>
using namespace std;
int main(){
	int nc = 0; int gotas = 0; int h = 0; int m = 0; int s = 0;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		cin >> gotas;
		h = gotas / 3600;
		m = (gotas % 3600)/60;
		s = (gotas % 3600)%60;
		cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << endl;
	}
		return 0;
}