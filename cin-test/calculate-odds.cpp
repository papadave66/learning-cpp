#include <iostream>
using namespace std;
int main(){
	cout << "please enter a number" << endl;
	int N;
	cin >> N;
	int sum = 0;
	int tmp;
	int num = 2 * N - 1;
	for (tmp = 1;tmp <= num;tmp+=2){
		sum += tmp;
}
	cout << sum << endl;
	
	return 0;
}
