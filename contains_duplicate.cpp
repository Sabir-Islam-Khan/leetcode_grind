#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long int size = nums.size();
        bool flag = false;
        for (int i = 0; i < size-1; i++ ) {
            if(nums[i] == nums[i+1]) {
                flag = true;
            }
        } 
    return flag;
    }
};