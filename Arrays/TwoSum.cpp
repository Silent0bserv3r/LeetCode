#include <bits/stdc++.h>;
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int comp = abs(target - nums[i]);
            if (map.count(comp)) {
                return {i, map[comp]};
            } else {
                map[nums[i]] = i;
            }
        }
        return {};
    }
};


/**
 * Testcases
 * [2,7,11,15]
 * 9
 * [3,2,4]
 * 6
 * [3,3]
 * 6
*/