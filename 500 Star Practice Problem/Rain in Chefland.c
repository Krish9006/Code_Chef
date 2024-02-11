#include <stdio.h>

int main(void) {
    int h,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d",&h);
	if(h<3)
	{
	    printf("LIGHT\n");
	}
	else if((h>=3)&&(h<7))
	{
	    printf("MODERATE\n");
	}
	else
	{
	    printf("HEAVY\n");
	}
	}
	return 0;
}



