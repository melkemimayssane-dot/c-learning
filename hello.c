 /*Hello world program*/

#include <stdio.h>

int main(void)
{
	int i; //declare the type of the variable
	
	i=2;//assign the value 2 into the variable i
	
	float f = 3.14;

	char *s = "stringtype"; //char * ('char pointer') is stringtype

        printf("Hello World!\n"); //Actually does the work

	printf("i= %d and f = %f str : %s !\n", i, f, s); // %s : string, %d int, %f float.
}
