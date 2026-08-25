class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        for(int i = k; ; i += k)
        {
            bool found = false;

            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] == i)
                {
                    found = true;
                    break;
                }
            }

            if(!found)
                return i;
        }
        return -1;     
    }
};