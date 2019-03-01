#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream outfile ("text.txt",ios_base::app);
	if(!outfile){
	cerr << "oops,unable to save the file." <<endl;
	}else{
		outfile << "O-oooooooooo AAAAE-A-A-I-A-U- JO-oooooooooooo AAE-O-A-A-U-U-A- E-eee-ee-eee AAAAE-A-E-I-E-A- JO-ooo-oo-oo-oo EEEEO-A-AAA-AAAA" <<endl;
}
	return 0;
}
