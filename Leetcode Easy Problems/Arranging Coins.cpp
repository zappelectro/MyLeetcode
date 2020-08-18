// Link : Arranging Coins : https://leetcode.com/problems/arranging-coins/

class Solution {
public:
	long long int arrangeCoins(long long int n) {
		return (long long int)floor((-1 + sqrt(1 + 8 * n)) / 2);
	}
};