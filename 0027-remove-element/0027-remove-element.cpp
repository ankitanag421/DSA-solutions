class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=-1; int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                j=i;
                break;
            }
        }
        if(j==-1)
        return nums.size();
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)
            break;
            count++;
        }
        return count;
    }
};