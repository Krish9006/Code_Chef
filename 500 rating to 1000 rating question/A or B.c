#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,c,d;
	    scanf("%d%d",&x,&y); 
	    c=(500-(2*x)+1000-(4*(y+x)));
	    d=(1000-(4*y)+500-(2*(y+x)));
	        if(c>d){
	    printf("%d\n",c);}
	
	else { printf("%d\n",d);}}
	return 0;
}

