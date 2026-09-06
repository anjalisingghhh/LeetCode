class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        vector<int> missing;
        int num = 1;
        int i = 0;

        while(missing.size() < k)
        {
            if(i < arr.size() && arr[i] == num)
                i++;
            else
                missing.push_back(num);

            num++;  
        }
        return missing[k - 1];    
    }
};