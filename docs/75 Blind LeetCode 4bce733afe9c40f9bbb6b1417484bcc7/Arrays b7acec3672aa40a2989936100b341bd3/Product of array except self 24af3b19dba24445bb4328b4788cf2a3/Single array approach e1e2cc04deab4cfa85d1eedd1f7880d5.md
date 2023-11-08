# Single array approach

- Create a array and store the left product in it
- Start another loop from the end
- multiply the left product array

```cpp
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
```

[1,2,3,4]

out = [24, 12, 8, 6]

right = 24