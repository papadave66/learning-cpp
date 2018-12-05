#include <iostream>
using namespace std;
int main(){
	int N = 0;
	int sum =0;
	int tmp = 1;
	int x = 0;
	while (cin >> N && N !=0){
		for (tmp=1;tmp<=N;tmp++){
		cin >> x;
		sum +=x;	
	}
	cout << sum << endl;
	
}
	return 0;
}
	
