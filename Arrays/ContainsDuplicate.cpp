#include <bits/stdc++.h>;
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> map;
        for (int i = 0; i < nums.size(); i++) {
            if(map[nums[i]]) {
                return true;
            } else {
                map[nums[i]] = true;
            }
        }
        return false;
    }
};

/**
 * TesCases
 * [1,2,3,1]
 * [1,2,3,4]
 * [1,1,1,3,3,4,3,2,4,2]
*/