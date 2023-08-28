#include <iostream>		
#include <iomanip>

using namespace std;

int main() {
	long long A;
	double B;
	cin >> A >> B;
	cout << fixed << setprecision(3) << A/B << " km/l" << endl;
}