#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d \n",&t);
	while(t--){
	    int n,i,k;
	    k=0;
	    scanf("%d \n",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    if(n%2!=0)
	      printf("-1 \n");
	     else {
	         for(i=0;i<n;i++){
	             if(a[i]==1)
	             k++;}
	         if(k<=n/2)
	         printf("%d\n",(n/2)-k);
	         else
	         printf("%d\n",k-(n/2));
	     } }
	return 0;
}