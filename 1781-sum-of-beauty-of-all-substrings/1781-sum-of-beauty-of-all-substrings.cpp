class Solution {
public:
    int beautySum(string s) 
    {
        int ans = 0;
        
        for (int i = 0; i < s.size(); i++) 
        {
            unordered_map<char, int> freq;

            for (int j = i; j < s.size(); j++) 
            {
                freq[s[j]]++;
                int maxFreq = 0;
                int minFreq = INT_MAX;

                for (auto &p : freq) 
                {
                    maxFreq = max(maxFreq, p.second);
                    minFreq = min(minFreq, p.second);
                }
                ans += maxFreq - minFreq;
            }
        }
        return ans;
    }
};