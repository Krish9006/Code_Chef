#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while (t--) {
	    int x,y,z;
	    scanf("%d%d%d", &x,&y,&z);
	    int t=y/x;
	    if (t<=z)
	    printf("%d\n", z-t);
	    else 
	    printf("0\n");
	}
	return 0;

}

