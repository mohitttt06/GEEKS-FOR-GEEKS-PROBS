class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        
        
        
        vector <int> v;
        for(int i=0;i<arr.size();i++)
        {
            v.push_back(arr[i]);
        }
        
        
        sort(v.begin(),v.end());
        
        
        int c=arr.size();
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=v[i])
            {
                c--;
            }
           
        }
        
        if(c==arr.size())
        {
            return true;
        }
        
        else
        {
            return false;
        }
        
    }
};
