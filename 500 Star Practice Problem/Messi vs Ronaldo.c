#include <stdio.h>

int main(void) {
 	int A,B,X,Y;
    	scanf("%d %d %d %d",&A,&B,&X,&Y);
    int messi=2*A+B;
	int ronaldo=2*X+Y;
	if (messi>ronaldo)
	    printf("messi");
	else if (messi<ronaldo)
	    printf("ronaldo");
	else if (messi=ronaldo)
	    printf("equal");
	return 0;
}


