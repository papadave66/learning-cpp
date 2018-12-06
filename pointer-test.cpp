#include <iostream>
using namespace std;
int main(){
	int x = 1024;
	int *point = &x;
	cout <<"address is :" << point << endl;
	cout <<"the value is : "<<*point << endl;
	return 0;
}
