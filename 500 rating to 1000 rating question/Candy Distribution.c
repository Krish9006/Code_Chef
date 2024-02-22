#include <stdio.h>

int main(void) {
	 int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        if((n/m)%2==0&&(n%m)==0)
        puts("YES");
        else
        puts("NO");
    }
}

