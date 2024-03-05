// link - https://leetcode.com/problems/search-in-rotated-sorted-array/description/

// time complexity = 2*logN
// space - constant


class Solution {
public:

    int getPivot(vector<int> &nums)
{
    int s=0;
    int e= nums.size()-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(nums[mid]>=nums[0])
            {
                s = mid+1;
            }
        else
            {
                e = mid;
            }

        mid = s + (e-s)/2;
    }

    return mid;

}

    int b_search(vector<int>& arr,int s ,int e,int key){

    int mid = s+(e-s)/2;
    while(s<=e){

        if(arr[mid]== key){
            return mid;
        }

        else if(key> arr[mid]){
            s = mid +1;

        }

        else if(key<arr[mid]){
            e = mid -1;

        }

        mid = s+(e-s)/2;
    }

    return -1;


}

    int search(vector<int>& nums, int target) 
    {
        int n = nums.size()-1;
        int pivot = getPivot(nums);
        if(target >= nums[pivot] && target <= nums[n])
        {
            return b_search(nums , pivot , n , target );
        }

        else 
        {
            return b_search ( nums , 0 , pivot-1 , target);
        }
    }
};
