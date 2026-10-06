class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>count1(26,0);
        vector<char>count2(26,0);

        for(int i=0;i<s.size();i++)
        {
            count1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            count2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(count1[i]!=count2[i])
            return false;
        }
        return true;
        
    }
};
