#include <stdio.h>

int main(void) {
	// your code goes here
int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>y)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
}
return 0;
}

