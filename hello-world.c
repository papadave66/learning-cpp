#include <stdio.h>
int main(){
	printf("hello world\n");
	int i =10;
	double j=10;
	printf("The int in memory needs %d bytes\n",sizeof(i));
	printf("And double in memory needs %d bytes\n",sizeof(j));
	return 0;
}
