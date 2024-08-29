class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
          vector<int>ans;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
         for(auto it:mpp){
            ans.push_back(it.second);
         }
         sort(ans.begin(),ans.end());
       
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1])
            return false;
        }
      
       
        return true;
    }
};