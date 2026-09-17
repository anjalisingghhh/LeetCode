class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        // APPROACH - 02
        unordered_map<int, int> freq;

        for (int num : nums)
            freq[num]++;

        for (auto& it : freq)
        {
            if (it.second == 1)
                return it.first;
        }
        return -1;




//----------------------------------------------------------------------------------------------



        // // APPROACH - 01
        // int xorValue = 0;

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     xorValue ^= nums[i];
        // }
        // return xorValue;
    }
};