#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
{
    scanf("%d%d",&x,&y);
  	if(x >= 2*y){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
}
return 0;

}

