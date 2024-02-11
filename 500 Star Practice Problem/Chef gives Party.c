#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n,x,k;
	    scanf("%d %d %d",&n,&x,&k);
	    int m=n*x;
	    if(m>k)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
}
return 0;

}

