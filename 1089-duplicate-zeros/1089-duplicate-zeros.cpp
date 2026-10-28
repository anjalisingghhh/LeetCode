class Solution 
{
public:
    void duplicateZeros(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> temp;

        for (int x : arr) 
        {
            temp.push_back(x);

            if (x == 0)
                temp.push_back(0);
        }

        for (int i = 0; i < n; i++) 
        {
            arr[i] = temp[i];
        }
    }



//--------------------------------------------------------------------------------------------------



    // // APPROACH - 01
    // void duplicateZeros(vector<int>& arr) 
    // {
    //     int n = arr.size();

    //     for (int i = 0; i < n - 1; i++) 
    //     {
    //         if (arr[i] == 0) 
    //         {
    //             for (int j = n - 1; j > i; j--) 
    //             {
    //                 arr[j] = arr[j - 1];
    //             }
    //             arr[i + 1] = 0;
    //             i++;
    //         }
    //     }
    // }
};