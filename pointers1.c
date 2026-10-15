#include <stdio.h>

void increment(int *p) //the function accept an in-pointer
{
	*p=*p+1;        //add 1 to the thing p points to
}
int main(void)
{
	int i =10;

        int *j = &i; //adress-of (&) makes it a pointer to i
	
	printf("i is %d\n", i); //10
        printf("i is also %d\n", *j); //10, cuz *j ig

	increment(j);       //j is int*--to i

	printf("i is %d\n", i); //prints 11
//or call increment(&i)

int *po;
po=NULL; //indication that the pointer doesnt point to anything

//deferencing a null pointer, results to crash, to avoid.

/*only the variables w a * are pointers. int* p,q, only  p is pointer. int q,*p, p is pointer*/

//SIZEOF

printf("%zu\n", sizeof j); //size of int*
printf("%zu\n", sizeof *j); //sizeof int

}
