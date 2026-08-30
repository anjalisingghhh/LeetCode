class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {   
        int n = nums.size();
        int minEle = INT_MAX;
        int maxEle = INT_MIN;
        int minIndex = -1;
        int maxIndex = -1;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] < minEle)
            {
                minEle = nums[i];
                minIndex = i;
            }

            if(nums[i] > maxEle)
            {
                maxEle = nums[i];
                maxIndex = i;
            }
        }

        int option1 = max(minIndex, maxIndex) + 1;
        int option2 = n - min(minIndex, maxIndex);
        int option3 = minIndex + 1 + (n - maxIndex);
        int option4 = maxIndex + 1 + (n - minIndex);
    
        return min({option1, option2, option3, option4});
    }
};