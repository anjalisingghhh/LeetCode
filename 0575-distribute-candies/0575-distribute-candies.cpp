class Solution 
{
public:
    int distributeCandies(vector<int>& candyType) 
    {
        int distinct = 0;
        int n = candyType.size();

        for (int i = 0; i < n; i++) 
        {
            bool found = false;

            for (int j = 0; j < i; j++) 
            {
                if (candyType[i] == candyType[j]) 
                {
                    found = true;
                    break;
                }
            }
            if (!found)
                distinct++;
        }
        return min(distinct, n / 2);
    }
};