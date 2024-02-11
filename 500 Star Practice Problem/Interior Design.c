#include <stdio.h>

int main(void) {
    int x1,y1,x2,y2,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1+y1<x2+y2){
    printf("%d\n",x1+y1);
    }
    else{
        printf("%d\n",x2+y2);
        
    }
}	// your code goes here

}

