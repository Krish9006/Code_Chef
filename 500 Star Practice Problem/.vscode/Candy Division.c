#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    if(n%3==0){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}

