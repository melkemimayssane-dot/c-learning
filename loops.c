#include <stdio.h> //for printf
#include <stdlib.h> //for rand


int main(void)
{
	int i=0;
	while (i<10) {
		printf("i is now %d!\n", i);
		i++;
	}

printf("All done !\n");
printf("i is now %d!\n", i);
//the same w for :
	for (i=0; i<10; i++) {
		printf("i is now %d!\n", i);
	}

	/* in do while the condition is checked after,
	 so if false, it'll still run 1 time */

	int r;

	do {
		r= rand()%100; // Get a random number between 0 and 99
		printf("%d\n",r);
		} while (r!=37); //repeat until 37 comes up


	/*for*/
	int j;
	for(i=0, j=999; i<10; i++, j--){
	//using comma to do multiple things
		printf("%d, %d\n", i, j);
	}

	for(;;) { //"forever"
		printf("I will print ts again n again\n");
	}



}
