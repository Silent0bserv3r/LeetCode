#include <bits/stdc++.h>;
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, currSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            if (currSum > maxSum) {
                maxSum = currSum;
            }
            if (currSum < 0) currSum = 0;
        }
        return maxSum;
    }
};

/**
 * TestCases
 * [-2,1,-3,4,-1,2,1,-5,4]
 * [1]
 * [5,4,-1,7,8]
*/