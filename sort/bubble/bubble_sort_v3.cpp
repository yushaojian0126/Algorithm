#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

class Solution
{
	public:
		vector<int>& bubble_sort_v3(vector<int>& nums)
		{
			int size = nums.size();
			int temp;

			for (int i = size - 1; i > 0; i--)
			{
				int index = 1;
				for (int j = 1; j <= i; j++)
				{
					if (nums[j - 1] > nums[j])
					{
						temp = nums[j - 1];
						nums[j - 1] = nums[j];
						nums[j] = temp;
						index = j;
					}
				}
				i = index;
			}

			return nums;
		}
};

void print_int_vector(const vector<int> nums)
{
	for (auto num : nums)
		cout << num << " ";
	cout << endl;
}


int main()
{
	Solution solution;

	vector<int> nums = {100, 20, 40, 25, 50, 60, 70, 80};
	print_int_vector(nums);

	solution.bubble_sort_v3(nums);
	print_int_vector(nums);

	return 0;
}
