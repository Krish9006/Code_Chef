#include <stdio.h>

int main(void) {
	// your code goes here
int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,a,b;
	    
	    scanf("%d%d%d%d",&x,&y,&a,&b);
	    if(x*y==a*b){
	        printf("%d\n",0);
	    }
	    
	    else if(x*y!=a*b) {
	        if(x==a || x==b ){
	            
	            printf("%d\n",1);
	        }
	        else if(y==a||y==b){
	           
	            printf("%d\n",1);
	        }
	        else{
	        
	        printf("%d\n",2);
	    }
	    }
	}
	return 0;
}

