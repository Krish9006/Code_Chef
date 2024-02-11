#include <stdio.h>
 
   int main(void) {
	// your code goes here
    int t,x,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&x,&n);
        printf("%d\n",x-n);
    }
}