#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
{
    scanf("%d%d",&x,&y);
    printf("%d\n",x*4+y);
}
}

