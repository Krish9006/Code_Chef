#include <stdio.h>

int main(void) {
	// your code goes here
int t,i,count,n;
	
	scanf("%d",&t);
	
	
	
	while(t--){
	    count = 0;
	    //enter women number 
	    
	    scanf("%d",&n);
	    
	    int a1[n];
	    
	    //input data women age
	    for(i = 0 ; i < n ; i++){
	           scanf("%d",&a1[i]);
	    }
	    
	    //find the all eligible ages
	    for(i = 0; i < n ; i++){
	        if(a1[i] >= 10 && a1[i] <= 60){
	            count++;
	        }
	    }
	    
	    //print number of women
	    printf("%d\n",count);

	   
	}
	return 0;
}
