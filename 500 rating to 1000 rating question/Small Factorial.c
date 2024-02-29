#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,fact=1;
	    scanf("%d",&n);
	   for (i=1;i<=n;i++)
	   fact=fact*i;
	   i--;
	   printf("%d\n",fact);
	}
	return 0;
}