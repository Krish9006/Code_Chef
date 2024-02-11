#include <stdio.h>


    int main(void) 
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int x,h;
        scanf("%d%d",&x,&h);
        if(x>=h)
        {
            printf("\nyes");
        }
        else
        {
            printf("\nno");
        }
    }
	return 0;
}

    
        
        
    
        
    
	// your code goes here



