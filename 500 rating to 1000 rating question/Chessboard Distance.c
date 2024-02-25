#include <stdio.h>

int main(void) {
	// your code goes here
int t;
scanf("%d",&t);
while (t--){
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
if((abs(a-c))>=(abs(b-d))){
printf("%d\n",(abs(a-c)));}
else{
printf("%d\n",(abs(b-d)));}
}
	return 0;
}

