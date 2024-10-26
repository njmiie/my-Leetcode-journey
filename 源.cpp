#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	int Duplicates(vector<int>& nums)
	{
		int n = nums.size();
		int slow = 1;
		int fast = 1;
		while (fast < n)
		{
			if (nums[fast] != nums[fast - 1])
			{
				nums[slow] = nums[fast];
				slow++;
			}
			fast++;
		}
		return slow;
	}
	void showArray(vector<int>& nums, int k)
	{
		cout << "[";
		for (int i = 0; i < k; i++)
		{
			
			cout << nums[i];
			if (i < k - 1)
				cout << ",";
		}
		cout << "]";
	}
};
int main()
{
	vector<int> nums;
	int input;
	while (cin >> input)
	{
		nums.push_back(input);
	}
	Solution S;
	int k = S.Duplicates(nums);
	cout << k << "," << "nums=";
	S.showArray(nums, k);
}