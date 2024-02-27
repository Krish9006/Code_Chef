#include <stdio.h>

int main(void) {
	int n,x,p,t,y,z;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d%d%d",&n,&x,&p);
	    y=x*3;
	    z=n-x;
	    if((y-z)>=p)
	    printf("PASS\n");
	    else
	    printf("FAIL\n");
	}
	return 0;
}

