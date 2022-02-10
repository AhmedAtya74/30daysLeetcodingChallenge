class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
       
        int max_len = 0;
        for(int i = 0; i < s.size(); i++)
        {
            unordered_map<char, int>vis;
            int ans = 0;
            for(int j = i; j < s.size(); j++)
            {
                if(vis.find(s[j]) == vis.end()){
                    ans++;
                    vis[s[j]] = 1;
                }
                else
                {
                    break;
                }
            }
             max_len = max(max_len, ans);
        }
        
        return max_len;
    }
};


/*

abcabcbb
a
ab
abc
abca
abcab
abcabc
abcabcb
abcabcbb


*/
