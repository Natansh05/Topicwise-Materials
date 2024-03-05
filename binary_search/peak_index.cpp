// link - https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

// time complexity - logN
// space - constant

// s<e tak chalega s==e tak nahi e fir update karne me ek minus nai kar rahe hai to wo wahi pe khada reh jayega 
// dry run karo khud jaan jao 

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        int s=0,e = arr.size()-1;
        int mid = s + (e-s)/2;
        while(s<e)
        {
            if(arr[mid]<arr[mid+1])
                s = mid+1;
            else if(arr[mid]>arr[mid+1])
                e = mid;
            mid = s + (e-s)/2;
        }
        return mid;
    }
};
