#include <iostream>
using namespace std;
int main(){
	int biggest = 0;
	int temp = 666;
	cout << " This program finds the largest integer in a list." << endl;
	cout << " Enter 0 to signal the end of the list. " << endl;
	while(temp != 0){
	cout << "? " ;
	cin >> temp;
	if ( temp >= biggest){
		biggest = temp;
	}	
}
	cout << " The largest value was " << biggest << "."<< endl;
	
	return 0;
}
