class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()==1)
           return;
       for(int i=0;i<=nums.size()-2;i++){
        int min=i;
        for(int j=i;j<=nums.size()-1;j++){
            if(nums[j]<nums[min])
            min=j;
        }
        swap(nums[i],nums[min]);
       } 
      
    }
};