class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char, int> freq;

        for (char ch : s) 
            freq[ch]++;

        string ans;

        while (!freq.empty()) {
            char maxChar;
            int maxFreq = 0;

            for (auto &p : freq) 
            {
                if (p.second > maxFreq) 
                {
                    maxFreq = p.second;
                    maxChar = p.first;
                }
            }

            ans.append(maxFreq, maxChar);
            freq.erase(maxChar);
        }
        return ans;
    }
};