#include<stdio.h>
int main(){
   
 int a[]={1,2,3,4};
 char b[]={'q','u','i','z'};
//int a=1;
//int b=2;

//int *p;
int* q = &b;
//p=&a;
// q=&b;

//printf("%d\n", *(p+1));
printf("%p\n", q);
// printf("%c", *q);
 return 0;
}