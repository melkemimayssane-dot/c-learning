#include <stdio.h>

int main(void)
{

	int i = 10;
	int j = 5 + i++; //Compute 5+I, then increment i

	printf("%d, %d\n", i, j);//prints 11, 15
	//if it was ++i, it would've printed 11, 16
}
/*and : &&, or : ||, not : ! (w parentheses)*/
