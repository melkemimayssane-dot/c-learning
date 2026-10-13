#include <stdio.h>

int main(void) {

	int x=1;

	switch(x) {
		case 1:
			printf("1\n");
			// Fall through ! 
			//goes to the next case
		case 2:
			printf("2\n");
			break;
		case 3:
			printf("3\n");
			break;
	}
}
/*only switch w integer, not with float, 
char are ok because they are actually integers, 
enums (?) are ok too */
