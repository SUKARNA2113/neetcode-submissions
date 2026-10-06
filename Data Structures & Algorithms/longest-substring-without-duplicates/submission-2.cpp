class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0;
        int right = 0;
        int ans = 0;

        vector<int> count(128, 0);

        while(right < s.size())
        {
            // right ko window mein add karo
            count[(unsigned char)s[right]]++;

            // duplicate aa gaya
            while(count[(unsigned char)s[right]] > 1)
            {
                count[(unsigned char)s[left]]--;
                left++;
            }

            // valid window
            ans = max(ans, right - left + 1);

            right++;
        }

        return ans;
    }
};