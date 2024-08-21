class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int hash[10000]={0};
      
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++){
           if(hash[i]==0)
           return i;
        }
       return -1;
}
};