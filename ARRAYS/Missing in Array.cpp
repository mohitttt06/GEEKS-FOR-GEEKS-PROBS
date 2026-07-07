class Solution {
  public:
    int missingNum(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
 
       int c=1;
       int ans;
        for(int i=0;i<=arr.size();i++)
        {
            
            if(arr[i]!=c)
            {
                return c;
            }
            else
            {
                ans=-1;
            }
            c++;
        }
        
        if(ans==-1)
        {
            return c-1;
        }
        
        
        
        
        
    }
};
