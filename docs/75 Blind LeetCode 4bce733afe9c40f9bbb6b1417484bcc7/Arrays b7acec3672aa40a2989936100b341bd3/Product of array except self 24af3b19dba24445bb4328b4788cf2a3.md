# Product of array except self

## Problem

Given an integer array `nums`, return *an array* `answer` *such that* `answer[i]` *is equal to the product of all the elements of* `nums` *except* `nums[i]`.

The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

**Example 1:**

```
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

```

**Example 2:**

```
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

```

**Constraints:**

- `2 <= nums.length <= 105`
- `30 <= nums[i] <= 30`
- The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.

**Follow up:** Can you solve the problem in `O(1)` extra space complexity? (The output array **does not** count as extra space for space complexity analysis.)

## Approoach

[Two Loops](Product%20of%20array%20except%20self%2024af3b19dba24445bb4328b4788cf2a3/Two%20Loops%200bb9dce8605f42458f83c0df8916124f.md)

[Two array approach](Product%20of%20array%20except%20self%2024af3b19dba24445bb4328b4788cf2a3/Two%20array%20approach%20fb25746a3b4740e491251fd62d3b82a5.md)

[Single array approach](Product%20of%20array%20except%20self%2024af3b19dba24445bb4328b4788cf2a3/Single%20array%20approach%20e1e2cc04deab4cfa85d1eedd1f7880d5.md)