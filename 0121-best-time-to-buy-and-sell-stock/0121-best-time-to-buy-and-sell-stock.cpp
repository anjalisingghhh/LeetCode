class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        // APPROACH - 02
        int maxProfit = 0, mini = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            int cost = prices[i] - mini;
            maxProfit = max(maxProfit, cost);
            mini = min(mini, prices[i]);
        }
        return maxProfit;



//----------------------------------------------------------------------------------------


        // // APPROACH - 01 (BRUTE FORCE) = IT WILL GIVE TIME LIMIT EXCEEDED
        // int maxProfit = 0;
        // for (int i = 0; i < prices.size() - 1; i++)
        // {
        //     for (int j = i + 1; j < prices.size(); j++)
        //     {
        //         maxProfit = max(maxProfit, prices[j] - prices[i]);
        //     }
        // }
        // return maxProfit;
    }
};