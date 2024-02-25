#include <stdio.h>

int main(void) {
	// your code goes here
	int t,X,Y,Z;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
{
       
	    scanf("%d%d%d",&X,&Y,&Z); 
	    if(X%3!=0)
	    printf("%d\n",X*Y+(X/3)*Z);
	    else
	    printf("%d\n",X*Y+(X/3-1)*Z);
	}
	return 0;
}


