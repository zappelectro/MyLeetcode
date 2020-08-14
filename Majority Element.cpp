// Link : https://leetcode.com/problems/majority-element/


//Approach 1: Sorting

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		return nums[nums.size() / 2];
	}
};

//Approach 2: Using Map

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> mp;
		for (auto x : nums)
			mp[x]++;
		int ans;
		for (auto x : mp)
			if (x.second > nums.size() / 2)
				ans = x.first;
		return ans;
	}
};

