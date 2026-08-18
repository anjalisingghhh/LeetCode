class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        // APPROACH - 02
        vector<int> result(nums.size()); 
        int positiveIdx = 0;
        int negativeIdx = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]>0)
            {
                result[positiveIdx] = nums[i];
                positiveIdx += 2;
            }
            else
            {
                result[negativeIdx] = nums[i];
                negativeIdx += 2;
            }
        }
        return result;

        



//----------------------------------------------------------------------------------------------


        // // APPROACH - 01 (BRUTE FORCE)
        // vector<int> positive;
        // vector<int> negative;

        // for(int i = 0; i < nums.size();i++)
        // {
        //     if(nums[i] > 0)
        //         positive.push_back(nums[i]);
        //     else
        //         negative.push_back(nums[i]);
        // }

        // int p = 0, n = 0, j = 0;

        // while (p < positive.size() && n < negative.size())
        // {
        //     nums[j++] = positive[p++];
        //     nums[j++] = negative[n++];
        // }
        // return nums;
    }
};