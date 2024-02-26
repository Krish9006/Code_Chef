#include <stdio.h>

int main(void) {
	// your code goes here
	int t,c1,c2,x,y;;
	scanf("%d",&t);
	while(t--){
	  scanf("%d%d",&x,&y);
	  int c1 = ((x-1)/10)+1;
	  int c2 = ((y-1)/10)+1;
	  if (x>y){
	    printf("%d\n", c1-c2);
	  }
	  else{
	    printf("%d\n",c2-c1);
	  }
	}
	return 0;
}

