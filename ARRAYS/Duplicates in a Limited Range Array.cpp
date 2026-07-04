class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
      
      
      
      map <int,int> mp;
      
      for(int i=0;i<arr.size();i++)
      {
          mp[arr[i]]++;
      }
      
      vector <int> v;
      
      for(auto it:mp)
      {
          if(it.second==2) v.push_back(it.first);
      }
      
      return v;
    }
};
