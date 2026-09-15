class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        // APPROACH - 02
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;

        for (auto interval : intervals) 
        {
            if (merged.empty() || merged.back()[1] < interval[0]) 
            {
                merged.push_back(interval);
            } 
            else 
            {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;



//----------------------------------------------------------------------------------------------


        // // APPROACH - 01 
        // sort(intervals.begin(), intervals.end());
        // vector<vector<int>> ans;

        // int n = intervals.size();
        // for (int i = 0; i < n; ) 
        // {
        //     int start = intervals[i][0];
        //     int end = intervals[i][1];

        //     int j = i + 1;
        //     while (j < n && intervals[j][0] <= end) 
        //     {
        //         end = max(end, intervals[j][1]);
        //         j++;
        //     }
        //     ans.push_back({start, end});
        //     i = j;
        // }
        // return ans;
    }
};