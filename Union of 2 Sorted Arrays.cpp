class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set <int> s;
        s.insert(a.begin(),a.end());
        s.insert(b.begin(),b.end());
        
        
        
        vector <int> v(s.begin(),s.end());
        
       return v;
    }
};
