#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int w,x,y,z;
	    scanf("%d%d%d%d",&w,&x,&y,&z);
	    if(w==x || w==y || w==z ||w==x+y+z || w==x+y ||w==y+z || w==x+z)
	    printf("yes\n");
	    else printf("no\n");
	}
	return 0;
}

