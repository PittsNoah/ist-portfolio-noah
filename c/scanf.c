#include <stdio.h>

	int main()
{
	int age;
	float gpa;
	char grade;

	printf("Please enter your age: ");
	scanf("%i", &age);
	fflush(stdin);
	
	printf("Please enter your gpa: ");
	scanf(" %f", &gpa);
	fflush(stdin);
	
	printf("Please enter your grade: ");
	scanf(" %c", &grade);
	
	printf("Your age is: %i\n", age);	
	printf("Your gpa is: %f\n", gpa);
	printf("Your grade is: %c\n", grade);
	return 0;
}
