#include <iostream>
#include <vector>

using namespace std;


int removeDuplicates(vector<int>& nums) {

	if (nums.size() <= 0)
		return 0;
	if (nums.size() == 1)
		return 1;

	int i = 0;
	int count = 0;
	for (int j = 1; j < nums.size(); j++)
	{
		if (nums[i] == nums[j] && count < 1)
		{
			i++;
			nums[i] = nums[j];			
			count++;
		}
		else if (nums[i] != nums[j])
		{
			i++;
			nums[i] = nums[j];
			count = 0;
		}
	}

	return i + 1;

}

int main()
{
	vector<int> nums = { 1,2 };
	cout << removeDuplicates(nums);
}