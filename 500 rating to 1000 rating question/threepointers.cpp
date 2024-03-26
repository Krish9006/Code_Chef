#include<bits/stdc++.h>
using namespace std;
void dutchFlafAlgo(vector<int>& nums) {
       //one pass solution
       int lo=0;
       int mid=0;
       int hi=nums.size()-1;
       //1) mid k baare mien socho
       //2) o to low-1 --> 0 hi+1 to end--> 2
       //lo to mid-1-->1
       while(mid<=hi){
            if(nums[mid]==2){
                int temp=nums[mid];
                nums[mid]=nums[hi];
                nums[hi]=temp;
                hi--;
            }
            else if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[lo];
                nums[lo]=temp;
                lo++;
                mid++;
            }
            else mid++;
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
    dutchFlafAlgo(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
