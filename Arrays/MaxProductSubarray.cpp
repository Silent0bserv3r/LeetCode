#include <bits/stdc++.h>;
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int leftProduct, rightProduct, maxProduct;
        leftProduct = 1;
        rightProduct = 1;
        maxProduct = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            leftProduct *= nums[i];
            rightProduct *= nums[n-i-1];
            int temp = leftProduct > rightProduct ? leftProduct : rightProduct;
            if (temp > maxProduct) maxProduct = temp;
            if (leftProduct == 0) leftProduct = 1;
            if (rightProduct == 0) rightProduct = 1;
        }
        return maxProduct;
    }
};

/**
 * TestCase
 * [2,3,-2,4]
 * [-2,0,-1]
*/