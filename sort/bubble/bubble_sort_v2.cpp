#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

class Solution
{
	public:
		vector<int>& bubble_sort_v2(vector<int>& nums)
		{
			int size = nums.size();
			int temp;

			for (int i = size - 1; i > 0; i--)
			{
				bool sorted = true;
				for (int j = 1; j <= i; j++)
				{
					if (nums[j - 1] > nums[j])
					{
						temp = nums[j - 1];
						nums[j - 1] = nums[j];
						nums[j] = temp;
						sorted = false;
					}
				}

				if (sorted) break;
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

	vector<int> nums = {100, 10, 15, 20, 25, 40, 60, 90};
	print_int_vector(nums);

	solution.bubble_sort_v2(nums);
	print_int_vector(nums);

	return 0;
}
