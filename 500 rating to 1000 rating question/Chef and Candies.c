#include <stdio.h>

int main(void) {
	// your code goes here
int t;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<=y) printf("0\n");
    else if(x>y&&(x-y)%4==0) printf("%d\n",(x-y)/4);
    else printf("%d\n",((x-y)/4)+1);
    
}
}

