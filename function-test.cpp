#include <iostream>
using namespace std;

int add(int a, int b){
	int sum;
	sum = a + b;
	return sum;
}

int main(){
	int x = add(3,4);
	cout << "x is " << x << endl;
	return 0;
}
