class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();

        vector<int>v(2, -1);
        v[0] = intervals[0][0];
        v[1] = intervals[0][1];

        vector<vector<int>>merge;
        for (int i = 0; i < n; i++) {
            if (intervals[i][0] <= v[1])
            {
                v[1] = max(v[1], intervals[i][1]);
            }
            else {
                merge.push_back(v);
                v[0] = intervals[i][0];
                v[1] = intervals[i][1];
            }
        }
        merge.push_back(v);
        return merge;
    }
};