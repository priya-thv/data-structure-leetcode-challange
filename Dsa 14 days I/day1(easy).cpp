class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(auto v:nums){
            mp[v]++;
        }
        for(auto x:mp){
          if(x.second>1){
              return true;
          }
        }return false;
    }
};
