#include <bits/stdc++.h>;
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out(nums.size());
        out[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            out[i] = out[i-1] * nums[i-1];
        }
        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            out[i] *= right;
            right *= nums[i];
        }
        return out;
    }
};

/**
 * TestCase
 * [1,2,3,4]
 * [-1,1,0,-3,3]
*/