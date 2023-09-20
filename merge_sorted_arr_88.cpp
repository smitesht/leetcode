#include <iostream>
#include <vector>

using namespace std;


void static merge_sort_arr_88() {
	vector<int> num1 = {1,2,3,0,0,0};
	vector<int> num2 = {2,5,6};
	int m = 3;
	int n = 3;

	int i = m-1;
	int j = n-1;

	int k = (m + n) - 1;

	
	while(j >= 0 and i >= 0)
	{
		if (  num1[i] > num2[j])
		{
			num1[k] = num1[i];
			k--;	
			i--;
		}
		else
		{
			num1[k] = num2[j];
			k--;
			j--;
		}
	}

	while (i >= 0) {
		num1[k] = num1[i];
		k--;
		i--;
	}
	
	while (j >= 0) {
		num1[k] = num2[j];
		k--;
		j--;
	}

	for(auto num:num1)
	{
		cout << num << endl;
	}
}