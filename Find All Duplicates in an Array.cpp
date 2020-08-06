// Link : https://leetcode.com/problems/find-all-duplicates-in-an-array/

// Approach 1 : O(n) time and O(1) space

class Solution {
public:
	vector<int> findDuplicates(vector<int>& nums) {
		vector<int> res;
		for (auto n : nums) {
			n = abs(n);
			nums[n - 1] = -nums[n - 1];
			if (nums[n - 1] > 0)
				res.push_back(n);
		}
		return res;
	}
};

// Approach 2 : O(n) time and O(n) space

class Solution {
public:
	vector<int> findDuplicates(vector<int>& nums) {
		vector<int> ans;
		map<int, int> mp;
		for (auto x : nums)
			mp[x]++;
		for (auto x : mp)
			if (x.second == 2)
				ans.push_back(x.first);
		return ans;
	}
};