#include<bits/stdc++.h>
using namespace std;

void sortArr(vector<int>& nums){
    int i=0,st=0,end=nums.size()-1;
    while(i<=end){
        if(nums[i]==0){
            swap(nums[i],nums[st]);
            st++;
            i++;
        }
        else if(nums[i]==1){
            i++;
        }
        else{
            swap(nums[i],nums[end]);
            end--;
        }
    }
    for(i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int> nums={0,1,0,1,0,0,2,2,1,2,1};
    sortArr(nums);
    return 0;
}
