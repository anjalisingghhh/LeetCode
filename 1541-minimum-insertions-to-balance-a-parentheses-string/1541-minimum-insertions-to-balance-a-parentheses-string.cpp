class Solution {
public:
    int minInsertions(string s) 
    {
        int open = 0;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] == '(') 
                open++;
            else
            { 
                if (i + 1 < s.size() && s[i + 1] == ')') 
                    i++;
                else
                    ans++; 
                if (open > 0) 
                    open--;
                else 
                    ans++;
            }
        }
        ans += open * 2;
        return ans;



//-------------------------------------------------------------------------------



        // // APPROACH - 01 BRUTE FORCE APPROACH
        // stack<char> st;
        // int ans = 0;

        // for (int i = 0; i < s.size(); i++) 
        // {

        //     if (s[i] == '(') 
        //     {
        //         st.push('(');
        //     } 
        //     else 
        //     {
        //         if (i + 1 < s.size() && s[i + 1] == ')') 
        //             i++; 
        //         else 
        //             ans++; 

        //         if (!st.empty()) 
        //             st.pop(); 
        //         else 
        //             ans++;
        //     }
        // }
        // ans += st.size() * 2;
        // return ans;
    }
};