#include<bits/stdc++.h>
using namespace std;


// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

int func(vector<int> arr, int t){
    int n = arr.size();
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[i]=i;
    }
    for(int i=0; i<n; i++){
        int temp = target-arr[i];
        if(mp.count(temp) && mp[temp]!=i){
            return {x.second, i};
        }
    }
    return {};

}

int main(){
    vector<int> arr;
    int n = arr.size();
    for(int i=0; i<n; i++){
        cin>>arr[i]
    }
    int target;
    cout<<"Target: ";
    cin>>target;
    int ans = func(arr,target);
    return ans;
}