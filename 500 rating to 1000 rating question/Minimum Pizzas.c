#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
{
    scanf("%d%d",&x,&n);
    int y = (x*n)/4;
    if((n*x)%4==0)
	    printf("%d\n",(n*x)/4);
	    else
	    printf("%d\n",(n*x)/4+1);

}
}

