class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        //  APPROACH - 02
        unordered_set<int> st;

        for (int num : nums)
        {
            st.insert(num);
        }

        int maxLen = 0;

        for (int num : st)
        {
            // Start counting only if num is the beginning of a consecutive sequence.
            if (st.find(num - 1) == st.end())
            {
                int current = num;
                int count = 1;

                while (st.find(current + 1) != st.end())
                {
                    current++;
                    count++;
                }

                maxLen = max(maxLen, count);
            }  
        }
        return maxLen;



//----------------------------------------------------------------------------------------------


        // // APPROACH - 01
        // if (nums.empty())
        //     return 0;

        // sort(nums.begin(), nums.end());

        // int count = 1;
        // int maxCount = 1;

        // for (int i = 1; i < nums.size(); i++)
        // {
        //     if (nums[i] == nums[i - 1] + 1)
        //     {
        //         count++;
        //     }
        //     else if (nums[i] == nums[i - 1])
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         count = 1;
        //     }

        //     maxCount = max(maxCount, count);
        // }
        // return maxCount;
    }
};