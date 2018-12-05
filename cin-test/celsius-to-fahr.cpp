#include <iostream>
using namespace std;
int main(){
	double celsius;
	cout << "please enter a celsius, i will change to fahr." << endl;
	cin >> celsius;
	cout << "the fahr is " << celsius * 9 / 5 + 32 << "." << endl;
	
	return 0;
}
