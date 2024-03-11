#include<bits/stdc++.h>
using namespace std;
void swap(int* x,int* y){//usi k hisaab se yhaan value dena hogaa
    int temp=*x;
    *x=*y;
    *y=temp;
    return ;
}
int main(){
    int a=8,b=6;
    swap(&a,&b);//yhaan jaise chiz bhej rhe ho//int *x=&a;
    cout<<a<<" "<<b;
}