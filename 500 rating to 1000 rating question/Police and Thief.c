#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
{
        scanf("%d%d",&x,&y);
        if(x>y){
	printf("%d\n",x-y);
        }
        else{
                printf("%d\n",y-x);
        }
}
return 0;

}


