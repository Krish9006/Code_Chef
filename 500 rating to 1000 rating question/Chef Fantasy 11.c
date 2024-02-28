#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,a;
	    scanf("%d",&n);
	    a=n*(n-1);
	    printf("%d\n",a);
	}
}

