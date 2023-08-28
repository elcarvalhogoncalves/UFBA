#include <iostream>
using namespace std;
int main(){
    long long N,HH,MM,SS;
    cin >> N;
    HH=N/3600;
    N=N%3600;
    MM=N/60;
    N=N%60;
    SS=N;
    cout << HH << ":" << MM << ":" << SS << endl;
    
}