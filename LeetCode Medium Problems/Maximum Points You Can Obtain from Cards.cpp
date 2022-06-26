// Link : https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

class Solution {
public:
	int maxScore(vector<int>& cardPoints, int k) {
		int n = cardPoints.size(), rightSum = 0;
		for (int i = n - k; i < n; i++) {
			rightSum += cardPoints[i];
		}
		int slidingWindowSum = rightSum, best = rightSum;
		int i = 0, j = n - k;
		while (k--) {
			slidingWindowSum += cardPoints[i] - cardPoints[j];
			i++, j++;
			best = max(best, slidingWindowSum);
		}
		return best;
	}
};