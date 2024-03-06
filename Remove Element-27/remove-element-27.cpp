#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <string>

using namespace std;

// 27. Remove Element
int removeElement(vector<int>& nums, int val) {

    int count = 0;
    for (int j = count; j < nums.size(); j++)
    {
        if (nums[j] != val)
        {
            nums[count] = nums[j];
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums = { 0,1,2,2,3,0,4,2 };
    int val = 2;

    cout << removeElement(nums, val);
}