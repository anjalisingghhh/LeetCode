class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        // APPROACH - 02 OPTIMISED APPROACH
        int count = 0;
        int num = 1;
        int i = 0;

        while(count < k)
        {
            if(i < arr.size() && arr[i] == num)
                i++;
            else
            {
                count++;

                if(count == k)
                    return num;
            }
            num++;
        }
        return -1;


//----------------------------------------------------------------------------------------------


        // // APPROACH - 01 BRUTE FORCE
        // vector<int> missing;
        // int num = 1;
        // int i = 0;

        // while(missing.size() < k)
        // {
        //     if(i < arr.size() && arr[i] == num)
        //         i++;
        //     else
        //         missing.push_back(num);

        //     num++;  
        // }
        // return missing[k - 1];    
    }
};