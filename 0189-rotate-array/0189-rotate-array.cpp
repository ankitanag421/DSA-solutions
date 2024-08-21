class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       k%=nums.size();
        int i=0;
        int j=nums.size()-1;
        reverse(nums,0,j);
        reverse(nums,0,k-1);
        reverse(nums,k,j);
    }
    void reverse(vector<int>& nums,int start,int end){

        while(start<=end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
};