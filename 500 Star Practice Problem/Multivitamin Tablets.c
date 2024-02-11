#include <stdio.h>

int main(void) {
	// your code goes here
		int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x<=y/3){
	    printf("\n yes");
	    }
	    else{
	    printf("\n no");
	}
	}

        

}

