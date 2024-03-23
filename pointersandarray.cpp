#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int* ptr=arr;
    // cout<<ptr<<endl;
    // cout<<ptr[0];
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;//ptr is pointiomg to 1st element
    *ptr=8;//ptr[0]=8;
    ptr++; //ptr is pointiomg to 2nd element
    *ptr =9;
    ptr--; //ptr is pointiong to 1st element
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
}