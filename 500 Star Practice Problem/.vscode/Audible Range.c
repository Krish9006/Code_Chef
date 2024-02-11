#include <stdio.h>

int main(void) {
    int x,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        if(x>=67&&x<=45000){
            printf("\nYes");
        }
        else{
            printf("\nNo");
        }
    }
	// your code goes here

}

