class Solution 
{
    public:
        vector<string> result;
        string path;

        unordered_map<char, string> letters = {
            {'2', "abc"},
            {'3', "def"}, 
            {'4', "ghi"}, 
            {'5', "jkl"},
            {'6', "mno"}, 
            {'7', "pqrs"}, 
            {'8', "tuv"}, 
            {'9', "wxyz"}
        };   

        void backtrack(string& digits, int index) 
        {
            if (index == digits.size()) 
            {
                result.push_back(path);
                return;
            }

            string choices = letters[digits[index]];
            
            for (char ch : choices) 
            {
                path.push_back(ch);
                backtrack(digits, index + 1);
                path.pop_back(); // backtrack
            }
        }

        vector<string> letterCombinations(string digits) 
        {
            if (digits.empty())
                return {};

            backtrack(digits, 0);
            return result;
        }
};
