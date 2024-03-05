// link - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// time complexity - NlogN
// space complexity - O(1)
class Solution {
public:

    int first_occ(vector<int>& nums,int target){

    int s = 0;
    int e = nums.size() -1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){

        if(nums[mid]== target){
            ans = mid;
            e = mid-1;
        }

        else if(target> nums[mid]){
            s = mid +1;

        }

        else if(target<nums[mid]){
            e = mid -1;

        }

        mid = s+(e-s)/2;
    }

    return ans;


}

int last_occ(vector<int>& nums,int target){

    int s = 0;
    int e = nums.size() -1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){

        if(nums[mid]== target){
            ans = mid;
            s = mid + 1;
        }

        else if(target> nums[mid]){
            s = mid +1;

        }

        else if(target<nums[mid]){
            e = mid -1;

        }

        mid = s+(e-s)/2;
    }

    return ans;


}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> num;
        int n1 = first_occ(nums,target);
        int n2 = last_occ(nums,target);
        num.push_back(n1);
        num.push_back(n2);
        return num;
    }
};
