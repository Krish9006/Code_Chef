#include <stdio.h>

int main(void) {
	// your code goes here
int a,b,c,d,p,q,r,s,x;
scanf("%d",&x);
for(int i=0;i<x;i++){        
scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>(b+c+d)||b>(a+c+d)||c>(a+b+d)||d>(a+b+c)){
        printf("YES \n");
        }
        else{
        printf("NO \n");
        }
}
        
	// your code goes here
	return 0;

}

