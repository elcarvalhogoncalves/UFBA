#include <iostream>
	using namespace std;
	int main() {
	long long N,C,DC,DV,DX,UC,UD,U1;
	cin >> N;
	cout << N << endl;
	C=N/100;
	N=N%100;
	DC=N/50;
	N=N%50;
	DV=N/20;
	N=N%20;
	DX=N/10;
	N=N%10;
	UC=N/5;
	N=N%5;
	UD=N/2;
	N=N%2;
	U1=N/1;
	cout << C << " nota(s) de R$ 100,00" << endl;
	cout << DC << " nota(s) de R$ 50,00" << endl;
	cout << DV << " nota(s) de R$ 20,00" << endl;
	cout << DX << " nota(s) de R$ 10,00" << endl;
	cout << UC << " nota(s) de R$ 5,00" << endl;
	cout << UD << " nota(s) de R$ 2,00" << endl;
	cout << U1 << " nota(s) de R$ 1,00" << endl;
}
