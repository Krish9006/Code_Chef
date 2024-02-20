#include <stdio.h>

int main(void) {
	// your code goes here
int t,x,a,b;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d",&x,&a,&b);
	    if(a*1+b*2>=x)
	    printf("Qualify\n");
	    else
	    printf("NotQualify\n");
	}
	return 0;
}

