#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d %d",&x,&y);
	    if(x<y)
	    {
	        printf("%d\n",y-x);
	    }
	    else
	    {
	        printf("%d\n",0);
	    }
	}
	return 0;
}

	// your code goes here



