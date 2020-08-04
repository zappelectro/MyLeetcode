// Link : Power of Four : https://leetcode.com/problems/power-of-four/

class Solution {
public:
	bool isPowerOfFour(int num) {
		if (num <= 0)
			return false;
		int m = ceil(log2(num));
		int n = floor(log2(num));
		if (n == m && n % 2 == 0)
			return true;
		return false;
	}
};