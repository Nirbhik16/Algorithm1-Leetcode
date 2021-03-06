/*Question 1= 704. Binary Search:*/

class Solution {
public:
    int sol(vector<int>& nums,int target,int start,int end){
        if(end>=start){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            return sol(nums,target,start,mid-1);
        }
        else {
            return sol(nums,target,mid+1,end);
        }
        }
        return -1;
        
    }
    int search(vector<int>& nums, int target) {
        int s=nums.size();
        return sol(nums,target,0,s-1);
    }
};


/*Question 2: 278. First Bad Version:*/

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1;
        int end=n;
        while(start<end){
            int mid=start+(end-start)/2;
            if(isBadVersion(mid)){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};


//Question 3: 35. Search Insert Position:

class Solution {
public:
    int sol(vector<int>& nums,int target,int start,int end){
        if(start>end){
            return start;
        }
        if(end>=start){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            return sol(nums,target,start,mid-1);
        }
        else {
            return sol(nums,target,mid+1,end);
        }
        }
        return -1;
    }
    
    int searchInsert(vector<int>& nums, int target) {
        int s=nums.size();
        int ans= sol(nums,target,0,s-1);
        return ans;
    }
};





