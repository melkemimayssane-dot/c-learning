#include <stdio.h>

int main(void)
{
	printf("an int uses %zu bytes of memory\n", sizeof(int));
        //4 bytes for me
	int i = 10;
	int *p; //p is pointer to an int or int pointer type
	//p is uninitialized and points to garbage

	p=&i; // p points to i now
	
	printf("adress of i : %p\n", (void *)&i);

	*p=20; //dereference, now p points to 20

	printf("i is : %d\n", i); //prints 20
	printf("i is : %d\n", *p); //prints 20, dereference -p is the same as i :0
	
	


}
// & is adress-of operator
//"%p" to print pointer

