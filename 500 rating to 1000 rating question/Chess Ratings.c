#include <stdio.h>

int main(void) {
	// your code goes here
	int t; 
	scanf("%d",&t);
	while(t--) {
	    int x, y, z; 
	    scanf("%d%d",&x, &y); 
	    z=y-x;
	    if((z%8)==0)
	    printf("%d\n",z/8);
	    else 
	    printf("%d\n",z/8 + 1);
	}
	return 0;
}
