#include <stdio.h>

int main(void) {
	// your code goes here
	 int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(x<=y && x<=z)
        {
            printf("%d\n",(y+z));
        }
        else if(y<=x && y<=z)
        {
            printf("%d\n",x+z);
        }else
        {
            printf("%d\n",x+y);
        }
        
    }	return 0;
}