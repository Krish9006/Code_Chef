#include <stdio.h>

int main(void) {
    int x,y,n;
    scanf("%d",&n);
    for(int t=0;t<n;t++)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",x-y);
    }
	return 0;

}

