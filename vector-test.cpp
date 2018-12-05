#include <iostream>
#include <vector>
using namespace std;
int main(){
	const int size = 10;
	//int pell_seq[size];
	vector <int> pell_seq(size);
	pell_seq[0] = 1;
	cout << pell_seq[0] << endl;
	cout << "this vector's size is "<< pell_seq.size() << endl;
	return 0;
}
