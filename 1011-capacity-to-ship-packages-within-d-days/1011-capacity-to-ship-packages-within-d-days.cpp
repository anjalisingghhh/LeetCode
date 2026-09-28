class Solution {
public:

    // APPROACH - 02 OPTIMAL APPROACH
    bool canShip(vector<int>& weights, int days, int capacity) 
    {
        int usedDays = 1;
        int currentLoad = 0;
 
        for (int weight : weights) 
        {
            if (currentLoad + weight > capacity) 
            {
                usedDays++;
                currentLoad = weight;
            } 
            else 
                currentLoad += weight;
        }
        return usedDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) 
    {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int answer = high;
 
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
 
            if (canShip(weights, days, mid)) 
            {
                answer = mid;
                high = mid - 1;
            } 
            else 
                low = mid + 1;
        }
        return answer;
    }






//---------------------------------------------------------------------------------------------



    // // APPROACH - 01 BRUTE FORCE
    // int daysNeeded(vector<int>& weights, int capacity) 
    // {
    //     int days = 1;
    //     int currentLoad = 0;
 
    //     for (int weight : weights) 
    //     {
    //         if (currentLoad + weight > capacity) 
    //         {
    //             days++;
    //             currentLoad = weight;
    //         }
    //         else 
    //             currentLoad += weight;
    //     }
    //     return days;
    // }

    // int shipWithinDays(vector<int>& weights, int days) 
    // {
    //     int minCapacity = *max_element(weights.begin(), weights.end());
    //     int maxCapacity = accumulate(weights.begin(), weights.end(), 0);
 
    //     for (int capacity = minCapacity; capacity <= maxCapacity; capacity++) 
    //     {
    //         if (daysNeeded(weights, capacity) <= days) 
    //         {
    //             return capacity;
    //         }
    //     }
    //     return -1;
    // }
};