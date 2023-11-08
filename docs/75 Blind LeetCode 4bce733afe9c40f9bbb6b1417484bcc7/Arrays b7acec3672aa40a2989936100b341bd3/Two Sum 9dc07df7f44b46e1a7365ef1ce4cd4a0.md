# Two Sum

## Problem

Given an array of integers `nums` and an integer `target`, return *indices of the two numbers such that they add up to `target`*.

You may assume that each input would have ***exactly* one solution**, and you may not use the *same* element twice.

You can return the answer in any order.

**Example 1:**

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

```

**Example 2:**

```
Input: nums = [3,2,4], target = 6
Output: [1,2]

```

**Example 3:**

```
Input: nums = [3,3], target = 6
Output: [0,1]

```

**Constraints:**

- `2 <= nums.length <= 104`
- `109 <= nums[i] <= 109`
- `109 <= target <= 109`
- **Only one valid answer exists.**

**Follow-up:**

Can you come up with an algorithm that is less than

```
O(n2)
```

time complexity?

## Approach

- Brute Force
    
    [Brute Force](Two%20Sum%209dc07df7f44b46e1a7365ef1ce4cd4a0/Brute%20Force%20105c85a68f42428792569624b96f6a4d.md)
    
- Hash Map - 2 pass
    
    [Hash Map - 2 pass](Two%20Sum%209dc07df7f44b46e1a7365ef1ce4cd4a0/Hash%20Map%20-%202%20pass%2059d8b613d89b40a5a10f8b9047277802.md)
    
- Has map - single pass
    
    [Hash Map - 1 pass](Two%20Sum%209dc07df7f44b46e1a7365ef1ce4cd4a0/Hash%20Map%20-%201%20pass%208c1dbb6f8b5540e1a0a665b8cbd9e906.md)