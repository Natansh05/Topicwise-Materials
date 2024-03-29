// link - https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// time complexity - logN
// space complexity - constant

class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int s = 0;
        int e = nums.size() - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] > nums[e])
                s = mid + 1;
            else
                e = mid;
        }
        return nums[e];
    }
};
