#include<bits/stdc++.h>
using namespace std;
 void sortColors(vector<int>& nums) {
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else if(nums[i]==1) one++;
            else two++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<zero) nums[i]=0;
            else if(i<(zero+one)) nums[i]=1;
            else nums[i]=2;
        }
    }
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sortColors(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}