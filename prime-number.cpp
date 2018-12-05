#include <iostream>
using namespace std;
int main(){
	int N;
	int FLAG = 1;
	int i = 2;
	int j = 2;
	cin >> N;
	for (i=2;i<=N;i++){
	FLAG = 1;
		for(j=2;j<=i/2;j++){
			if(i%j==0)
				FLAG = 0;
	}
	if(FLAG==1)
		cout << i << endl;
}
	return 0;
}
