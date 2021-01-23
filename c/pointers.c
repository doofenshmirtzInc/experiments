
#include <iostream>


void
pointer(){
	int var;
	int * ip;

	ip = &var;
	printf("input an integer : ");

	scanf("%d", &var);
	printf("the value of the pointer is: %d\n", *ip);

}


void
pointer_array(){

	int num_elems = 5;
	int array[num_elems];
	int * ap[num_elems];

	//initialize array of integers
	for (int i = 0; i < num_elems; i++){
		array[i] = i * i;
		ap[i] = &array[i];
	}


	for (int j = 0; j < num_elems; j++){
		printf("the value of pointer i is : %d\n", *ap[j]);
	}

}


int
main(){

	pointer();
	pointer_array();

	return 0;
}
