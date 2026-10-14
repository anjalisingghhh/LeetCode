class Solution 
{
public:
    int distributeCandies(vector<int>& candyType) 
    {
        sort(candyType.begin(), candyType.end());
        int distinct = 1;
        
        for (int i = 1; i < candyType.size(); i++) 
        {
            if (candyType[i] != candyType[i - 1])
            distinct++;
        }
        return min(distinct, (int)candyType.size() / 2);



//--------------------------------------------------------------------------------



        // // APPROACH - 01
        // int distinct = 0;
        // int n = candyType.size();

        // for (int i = 0; i < n; i++) 
        // {
        //     bool found = false;

        //     for (int j = 0; j < i; j++) 
        //     {
        //         if (candyType[i] == candyType[j]) 
        //         {
        //             found = true;
        //             break;
        //         }
        //     }
        //     if (!found)
        //         distinct++;
        // }
        // return min(distinct, n / 2);
    }
};