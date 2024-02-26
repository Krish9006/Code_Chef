#include <stdio.h>

int main(void) {
                // your code goes here
                	int t,x,n,c;
	scanf("%d",&t);
	while(t--){
	  scanf("%d%d",&x,&n);
	  if(n%100==0){
	     c=n/100;
	  }
	  else{
	    c=(n/100)+1;
	  }
	  if(c>x){
	    printf("%d\n",c-x);
	  }
	  else{
	    printf("0\n");
	  }
	 
	}
	return 0;

                }