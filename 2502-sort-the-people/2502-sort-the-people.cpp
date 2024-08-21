class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        for(int i=0;i<heights.size();i++){
            v.push_back({heights[i],names[i]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<string>ans;
        for(auto i:v){
            ans.push_back(i.second);
        }
        return ans;
    }
};