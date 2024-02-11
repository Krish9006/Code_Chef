#include <stdio.h>

int main(void) {
	// your code goes here
	int x,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
{
    scanf("%d",&x);
    if(x<7){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
}
return 0;
}



