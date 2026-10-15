#include <stdio.h>

//this function takes no arguments and returns no value
void hello(void)
{
        printf("Hello, world !\n");
}


int plus_one(int n) //definition of function
//the int before +1 indicates type of value returned

{

	return n + 1;
}

int main(void)
{
	int i = 10,j; //here j is an uninitialized variable, its not in i
	
	j= plus_one(i); //calling the function

	printf("i+1 is %d\n", j);

	hello();//prints Hello, world!

}

/* you can call a function before writing it fully,
 by declaring it first, w a prototype, 
example : int foo(void); 
then you can use foo, and actually write the
function later. */
