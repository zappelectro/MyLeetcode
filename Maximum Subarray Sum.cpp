// Link : https://leetcode.com/problems/maximum-subarray/
// Uses Kadane's algorithm.

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int mx = INT_MIN, mxsf = 0;
		for (auto x : nums) {
			mxsf += x;
			if (mxsf > mx)
				mx = mxsf;
			if (mxsf < 0)
				mxsf = 0;
		}
		return mx;
	}
};

