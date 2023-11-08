#include <bits/stdc++.h>;
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int hs = INT_MIN, cs = 0;
        for (int i = 0; i < n.size(); i++) {
            cs += n[i];
            if (cs > hs) {
                hs = cs;
            }
            if (cs < 0) cs = 0;
        }
        return hs;
    }
};

/**
 * TestCases
 * [-2,1,-3,4,-1,2,1,-5,4]
 * [1]
 * [5,4,-1,7,8]
*/