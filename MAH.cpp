class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {
        vector<int>left, right;
        stack<pair<int, int>>st;
        int n = heights.size();
        for (int i = 0; i < n; i++) {
            while (!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                left.push_back(-1);
            }
            else
                left.push_back(st.top().second);
            st.push({heights[i], i});
        }
        while (!st.empty()) st.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                right.push_back(n);
            }
            else
                right.push_back(st.top().second);
            st.push({heights[i], i});
        }
        reverse(right.begin(), right.end());
        int mxarea = INT_MIN;
        for (int i = 0; i < n; i++) {
            int area = (abs(left[i] - right[i]) - 1) * heights[i];
            mxarea = max(mxarea, area);
        }
        return mxarea;
    }
};