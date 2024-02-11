#include <stdio.h>

int main(void) {
    int h;
	scanf("%d",&h);
	if(h<3)
	{
	    printf("gold\n");
	}
	else if((h>=3)&&(h<6))
	{
	    printf("silver\n");
	}
	else
	{
	    printf("bronze\n");
	}
	return 0;
}

