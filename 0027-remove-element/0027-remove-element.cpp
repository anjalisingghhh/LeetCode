class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int j = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[j++] = nums[i]; 
            }
        }
        return j;


//---------------------------------------------------------------------------------------------



        // // APPROACH - 01
        // int size = nums.size();
        // vector<int> temp;

        // for(int i = 0; i < size; i++)
        // {
        //     if(nums[i] != val)
        //     {
        //         temp.push_back(nums[i]);
        //     }
        // }

        // for(int i = 0; i < temp.size(); i++)
        // {
        //     nums[i] = temp[i];
        // }
        // return temp.size();
    }
};