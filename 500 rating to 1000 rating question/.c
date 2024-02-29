#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int d=20-b;
	int e=d*6*6;
	if(c+e>a)
	   printf("YES\n");
	 else
      printf("NO\n");
	return 0;
}

