#include <stdio.h>

int main(void) {
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){

    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
	    printf("Alice\n");
	    else if(b>a &&b>c)
	    printf("Bob\n");
	    else
	    printf("Charlie\n");
	}
	return 0;
}
