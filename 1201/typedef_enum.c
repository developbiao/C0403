#include <stdio.h>
//normal define
//enum Sex {Male, Female};

//use typedef

enum Sex {Male, Female};
typedef enum Sex Mysex;
int main()
{
	//normal use
	//enum Sex sex = Female;

	Mysex sex = Male;
	printf("%d\n", sex);
	
	return 0;
}
