#include <stdio.h>

int main(void) {
	// your code goes here
int t,x1,x2,x3,x4;
scanf("%d",&t);
for(int i=0;i<t;i++){
    scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
    if(x1+x2+x3+x4==0){
        printf("\nIn");
    }
else{
    printf("\nOut");
}
}
}

