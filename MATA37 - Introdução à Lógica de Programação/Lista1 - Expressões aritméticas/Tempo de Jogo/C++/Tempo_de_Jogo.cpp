#include <iostream>
using namespace std;
int main () {
	long long H1,H2,R;
	cin >> H1 >> H2;
	R=(H2-H1+23)%24+1;
	cout << "O JOGO DUROU " << R << " HORA(S)" << endl;
}