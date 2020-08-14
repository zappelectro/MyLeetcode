// Link : https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        int i, n = s.length();
        map<char, int> mp;
        for (i = 0; i < n; i++)
            mp[s[i]]++;
        int even = 0, odd = 0, os = 0;
        for (auto x : mp) {
            if (x.second % 2) {
                odd = max(odd, x.second);
                os += x.second - 1;
            }
            else
                even += x.second;
        }
        if (odd == 0)
            return even;
        return even + os + 1;
    }
};