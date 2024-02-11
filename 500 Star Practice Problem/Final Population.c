#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,z,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
{
    scanf("%d%d%d",&x,&y,&z);
    printf("%d\n",x-y+z);

}
}

