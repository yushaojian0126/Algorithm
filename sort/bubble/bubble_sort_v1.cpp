#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

/**
 * O(N^2)
 */
class Solution
{
	public:
		vector<int>& bubble_sort_v1(vector<int>& nums)
		{
			int size = nums.size();
			int temp;

			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 1; j <= i; j++)
				{
					if (nums[j - 1] > nums[j])
					{
						temp = nums[j - 1];
						nums[j - 1] = nums[j];
						nums[j] = temp;
					}
				}
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

	vector<int> nums = {1, 100, 50, 80, 69, 32, 34, 29, 99};
	print_int_vector(nums);

	solution.bubble_sort_v1(nums);
	print_int_vector(nums);

	return 0;
}
