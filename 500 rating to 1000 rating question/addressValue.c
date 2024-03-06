#include<stdio.h>
int main(){
   
// int a[]={1,2,3,4};
// char b[]={'q','u','i','z'};
int a=1;
int b=2;

int *p;
int *q;
p=a;
q=&a;

printf("%d", *(p+2));
printf("%d", *(q+2));
 return 0;
}