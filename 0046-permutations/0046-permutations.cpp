class Solution 
{
    public:
    void backtrack(vector<int>& arr, vector<int>& path, vector<vector<int>>& result, int n)
    {
        if (path.size() == n) 
        {
            result.push_back(path);
            return;
        }

        for (int i = 0; i < n; i++) 
        {
            if (find(path.begin(), path.end(), arr[i]) == path.end()) 
            {
                path.push_back(arr[i]);
                backtrack(arr, path, result, n);
                path.pop_back();  // backtracking
            }
        }
    }

    vector<vector<int>> permute(vector<int>& arr)
    {
        vector<vector<int>> result;
        vector<int> path;

        backtrack(arr, path, result, arr.size());
        return result;
    }
};