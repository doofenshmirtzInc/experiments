
#include <iostream>

int
main(int nargs, char * args[]){

	printf("number of args: %d\n", nargs);
	for (int i = 0; i < nargs; i++){
		printf("the arguments are: %s\n", args[i]);
	}

	return 0;
}
