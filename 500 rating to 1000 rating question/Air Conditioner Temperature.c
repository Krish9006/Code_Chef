#include <stdio.h>

int main(void) {
	// your code goes here

	int T;
	scanf("%d",&T);
	for (int i=0;i<T;i++){
	    int a,b,c;
	    scanf("%d%d%d", &a,&b,&c);
	    if (c>b || a>b) {
	        printf("No\n");
	    } else {
	        printf("Yes\n");
	    }
	}
	return 0;
}

