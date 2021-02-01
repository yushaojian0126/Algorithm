#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Solution
{
	public:
		vector<int>& select_sort_v1(vector<int>& nums)
		{
			int size = nums.size();
			int temp;

			for (int end_index = size - 1; end_index > 0; end_index--)
			{
				int max_index = 0;
				for (int start_index = 1; start_index < end_index; start_index++)
				{
					if (nums[max_index] <= nums[start_index])
						max_index = start_index;
				}


				temp = nums[end_index];
				nums[end_index] = nums[max_index];
				nums[max_index] = temp;
			}
			return nums;
		}
};

void print_int_vector(const vector<int>& nums)
{
	for (auto num : nums)
		cout << num << " ";

	cout << endl;
}

int main()
{
	Solution solution;
	vector<int> nums = {100, 80, 60, 99, 84, 93, 69, 95};

	solution.select_sort_v1(nums);
	print_int_vector(nums);

	return 0;
}
