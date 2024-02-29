#include <stdio.h>

int main(void) {
	// your code goes here
int t;
scanf("%d",&t);
while(t--){
    int count=0;
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for (int i=0;i<n;i++){
            scanf("%d",&a[i]);
            a[i]=a[i]+k;
            if (a[i]%7==0) count++;
    }
    
    printf("%d\n",count);
}
}

