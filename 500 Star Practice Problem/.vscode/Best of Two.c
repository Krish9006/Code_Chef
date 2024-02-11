#include <stdio.h>

int main(void) {
     int T,x,y;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d",&x,&y);
        if(x>y){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",y);
        }
           
    }
        return 0;
    
	// your code goes here

}
	

