#include <stdio.h>
typedef struct _Student{
	char * name;
	char * id;
	char * sex;
	int age;
} student , *pStudent;
 
//typedef struct _Student student;
//typedef struct _Student *pStudent;
int main(){
	student s1;
	s1.name = "John Cena";
	s1.id = "666666";
	s1.sex = "male";
	s1.age = 30;
	return 0;
}
