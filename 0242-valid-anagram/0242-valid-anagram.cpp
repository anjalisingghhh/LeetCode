class Solution {
public:
    bool isAnagram(string s, string t) 
    {
                int m = s.length();
        int n = t.length();

        if(m != n) return false;

        unordered_map<char,int> mpp;
        for(int i = 0; i < m; i++)
        {
            mpp[s[i]]++;
        }

        for(int i = 0; i < n; i++)
        {
            mpp[t[i]]--;
        }

        for(auto it : mpp) 
        {
            if(it.second != 0) return false;
        }
        return true;
    }
};