class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el = 0;
        int i = 0;
        while (i < nums.size()) {

            if (cnt == 0) {
                el = nums[i];
            }

            if (nums[i] == el )
                cnt++;
            else
                cnt--;

            i++;
        }

        return el;
    }
};