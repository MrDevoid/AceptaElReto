#include <iostream>
using namespace std;
int main(){
	int nc = 0;
	cin >> nc;
	for (int i = 0; i < nc; ++i){
		int diatotal = 0, dia = 0, dia1 = 0, horatotal = 0, hora = 0, hora1 = 0, minutostotal = 0, minutos = 0, minutos1 = 0, segundostotal = 0, segundos1 = 0, segundos = 0; char aux = ' ';
		cin >> dia >>aux>> hora >>aux>> minutos >>aux>> segundos;
		cin >> hora1 >>aux>> minutos1 >>aux>> segundos1;
		while (hora1 != 0 || minutos1 != 0 || segundos1 != 0){
			
			segundostotal += segundos1;
			if (segundostotal >= 60){
				minutostotal += segundostotal / 60;
				segundostotal = segundostotal - (segundostotal / 60) * 60;
			}
		
			minutostotal += minutos1;
			if (minutostotal >= 60){
				horatotal += minutostotal / 60;
				minutostotal = minutostotal - (minutostotal / 60) * 60;
			}
		
			horatotal += hora1;
			if (horatotal >= 24){
				diatotal += horatotal / 24;
				horatotal = horatotal-(horatotal/24)*24;
			}
		
			
			cin >> hora1 >>aux>> minutos1 >>aux>> segundos1;
		}
		if (diatotal < dia) cout << "SI\n";
		else if (diatotal>dia)cout << "NO\n";
		else{
			if (horatotal < hora)cout << "SI\n";
			else if (horatotal>hora)cout << "NO\n";
			else{
				if (minutostotal < minutos)cout << "SI\n";
				else if (minutostotal > minutos)cout<<"NO\n";
				else { 
					if (segundostotal < segundos)cout << "SI\n";
					else cout << "NO\n";
				}
			}

		}
		
	}
	return 0;
}