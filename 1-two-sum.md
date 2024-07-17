# 1. Two Sum

LeetCode: [Two-Sum](https://leetcode.com/problems/two-sum)

```
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
```

### Answer:

Approach 1: The simple way to solve a problem is to iterate the array in two loops. During the iteration take the sum and compare with the target variable. This approach takes $ O(n)^2 $ time.

Optimal Approach:

- The optimal way is to use Hash table. The Hash table contains the array value as a key and index as a value.
- Then take a difference between the target and the next element.
- Find this difference in the Hash map. If the difference found, returns both the indexes

```cpp
vector<int> twoSum(vector<int>& nums, int target) {

    map<int, int> hashmap;
    vector<int> ret;

    for (int i = 0; i < nums.size(); i++)
    {
        if (hashmap.find(target - nums[i]) != hashmap.end())
        {
            int ind = hashmap[(target - nums[i])];
            ret.push_back(ind);
            ret.push_back(i);
            break;
        }
        else
        {
            hashmap[nums[i]] = i;
        }
    }

    return ret;

}
```
