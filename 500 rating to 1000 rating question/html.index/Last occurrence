#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,4,4,5};
    int n=8;
    int target=4;
    int low=0;
    int high=n-1;
    bool flag= false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            if(arr[mid+1]==target){
                low=mid+1;
            }
            else{
                flag=true;
                cout<<mid;
                break;
            }
        }
        else if(mid<target) low=mid+1;
        else high=mid-1;
    }
    if(flag==false) cout<<-1;


}