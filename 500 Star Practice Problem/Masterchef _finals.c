#include <stdio.h>

int main(void) {
    int x,t;
    scanf("%d",&x);
    for(int i = 0; i < x; i++){
        scanf("%d",&t);
        if(t > 10){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}