#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int frequency=n/7;
        if(n%7>1){
            frequency++;
        }
        printf("%d\n",frequency);
    }
    
    return 0;
}