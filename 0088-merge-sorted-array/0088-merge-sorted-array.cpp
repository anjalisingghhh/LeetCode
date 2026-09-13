class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        // APPROACH - 02 OPTIMISED SOLUTION
        int ind = m+n-1;
        int i = m-1, j = n-1;
        
        while(i >=0 && j >= 0)
        {
            if(nums1[i] > nums2[j])
                nums1[ind--] = nums1[i--];

            else
            {
                nums1[ind--] = nums2[j--]; 
            } 
        }
        while (j >= 0)
        {
            nums1[ind--] = nums2[j--];
        }



//----------------------------------------------------------------------------------------------


        // // APPROACH - 01 BRUTE FORCE
        // vector<int> temp;
        // int i = 0, j = 0;

        // while(i < m && j < n) 
        // {
        //     if(nums1[i] < nums2[j])
        //         temp.push_back(nums1[i++]);
        //     else
        //         temp.push_back(nums2[j++]);
        // }

        // while(i < m) {
        //     temp.push_back(nums1[i++]);
        // }

        // while(j < n) {
        //     temp.push_back(nums2[j++]);
        // }

        // for(int k = 0; k < temp.size(); k++) 
        // {
        //     nums1[k] = temp[k];
        // }
    }
};