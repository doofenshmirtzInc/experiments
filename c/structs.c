#include <stdio.h>
#include <string.h>

//this program will be working with structures and their operations in the c language

/*---------------------------------------------------------------------------------------
 * typical syntax of a c structure:
 *
 * struct [structure tag]{
 * 	member def;
 *	member def;
 *	...
 *	member def;
 * } [one or more structure vars];
 *---------------------------------------------------------------------------------------
*/


struct
Class{

	char term[100];
	int num_students;
	int num_ta;
	int num_teachers;
	float avg_grade;

};



void
print_classroom( struct Class *classroom ){
	printf("for this classroom we have:\n\n");
	printf("term: %s\n", classroom -> term);
	printf("number of students: %d\n", classroom -> num_students);
	printf("number of teaching assistants: %d\n", classroom -> num_ta);
	printf("number of teachers: %d\n", classroom -> num_teachers);
	printf("average grade: %f\n", classroom -> avg_grade);
}

int
main(){

	struct Class class1;
	struct Class class2;


	/* data collection */

	printf("first, we are going to need you to enter the information for each class\n\n");
	printf("first class:\n\n");
	printf("enter the term:\t");
	scanf("%s", class1.term);
	printf("\nenter the number of students:\t");
	scanf("%d", &class1.num_students);
	printf("\nenter the number of teaching assistants:\t");
	scanf("%d", &class1.num_ta);
	printf("\nenter the number of teachers for the class:\t");
	scanf("%d", &class1.num_teachers);
	printf("\nenter the average grade of the class:\t");
	scanf("%f", &class1.avg_grade);




	printf("second class:\n\n");
	printf("enter the term:\t");
	scanf("%s", class2.term);
	printf("\nenter the number of students:\t");
	scanf("%d", &class2.num_students);
	printf("\nenter the number of teaching assistants:\t");
	scanf("%d", &class2.num_ta);
	printf("\nenter the number of teachers for the class:\t");
	scanf("%d", &class2.num_teachers);
	printf("\nenter the average grade of the class:\t");
	scanf("%f", &class2.avg_grade);


	/* regurgitation */

	printf("\n\nHere's what we got:\n\n");
	printf("for the first class:\n\n");
	printf("term:\t%s\n", class1.term);
	printf("number of students:\t%d\n", class1.num_students);
	printf("number of TA's:\t%d\n", class1.num_ta);
	printf("number of teachers:\t%d\n", class1.num_teachers);
	printf("average grade for the class:\t%f\n", class1.avg_grade);


	printf("for the second class:\n\n");
	print_classroom(&class2);


	return 0;
}
