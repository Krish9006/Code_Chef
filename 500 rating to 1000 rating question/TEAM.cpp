#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==1&&b==1||b==1&&c==1||c==1&&a==1||a==1&&b==1&&c==1){
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
}