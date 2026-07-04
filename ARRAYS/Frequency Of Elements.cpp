class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map <int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        vector <vector <int>> vv;
        
        
        for(auto it:mp)
        {
            vv.push_back({it.first,it.second});
            
        }
        
        return vv;
        
        
    }
};
