// Link : https://leetcode.com/problems/range-sum-query-immutable/

class NumArray {
public:
    vector<int> pref;
    NumArray(vector<int>& nums) {
        int sum = 0;
        for (auto x : nums) {
            sum += x;
            pref.push_back(sum);
        }
    }

    int sumRange(int i, int j) {
        if (i != 0)
            return pref[j] - pref[i - 1];
        return pref[j];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */