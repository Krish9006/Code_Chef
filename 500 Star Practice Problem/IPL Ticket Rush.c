#include <stdio.h>

int main(void) {
     int t,x,y;
    scanf("%d",&t);
    for(int i=0;i<=t;i++){
        
        scanf("%d%d",&x,&y);
        if(x<y){
            printf("%d",0);
            continue;
        }
        printf("%d\n",x-y);
    
}
return 0;

}




