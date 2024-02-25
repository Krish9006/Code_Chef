#include <stdio.h>

int main(void) {
	// your code goes here
int a,b,c,d,e;
	scanf("%d",&a);
	while(a--){
	    scanf("%d %d %d %d",&b,&c,&d,&e);
	    if(b == c){
	        printf("YES\n");
	    }
	    else if(b>c && (b-c <= e)){
	        printf("YES\n");
	    }
	    else if(c>b && c-b <= d){
	        printf("YES\n");
	    }
	    else {
	        printf("NO\n");
	    }
	}
	return 0;

}

