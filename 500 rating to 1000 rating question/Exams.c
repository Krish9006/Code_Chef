#include <stdio.h>

int main(void) {
	// your code goes here
int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    float a,b;
	    scanf("%d%d%d",&x,&y,&z);
	    a=(x*y);
	    b=(z/a)*100;
	    if(b>50) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

