#include <stdio.h>

int main(void) {
	// your code goes here
 int testcases,N,A,B,X,i;
    scanf("%d",&testcases);
    while(testcases--)
    {
        scanf("%d %d %d",&N,&A,&B);
        X=0;
        for(i=1;i<=N;i++)
        {
            if(i%2==0)
            {
                X+=A;
            }
            else
            X+=B;
        }
        printf("%d\n",X);
    }
	return 0;
}

