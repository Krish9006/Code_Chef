#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        if(y>x){
            printf("\nPROFIT");
        }
        else if(y<x){
            printf("\nLOSS");
        }
        else{
            printf("\nNEUTRAL");
        }
    }
	// your code goes here

}

