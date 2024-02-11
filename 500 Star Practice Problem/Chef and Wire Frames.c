#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int n,m,x;
	int sum=0;
	scanf("%d",&t);
	while(t-->0)
	{
	    scanf("%d%d%d",&n,&m,&x);
	    sum=n*2+m*2;
	    x=sum*x;
	    printf("%d \n ",x);
	}
	return 0;

}



