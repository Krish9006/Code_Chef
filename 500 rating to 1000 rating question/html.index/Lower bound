#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int target=12;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){ 
            flag==true;
            cout<<nums[mid-1];
            break;
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    if(flag==false) cout<<nums[high];
}