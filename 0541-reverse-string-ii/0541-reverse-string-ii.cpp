class Solution {
public:
    string reverseStr(string s, int k) 
    {
        // APPROACH - 02
        int n = s.size();
        string result = "";

        for (int i = 0; i < n; i += 2 * k) 
        {
            string block = s.substr(i, 2 * k);

            int len = min(k, (int)block.size());
            reverse(block.begin(), block.begin() + len);

            result += block;
        }
        return result;



//-------------------------------------------------------------------------------------------------



        // // APPROACH - 01
        // for (int i = 0; i < s.length(); i += 2 * k) 
        // {
        //     int end = min(i + k, (int)s.length());
        //     reverse(s.begin() + i, s.begin() + end);
        // }
        // return s;
    }
};