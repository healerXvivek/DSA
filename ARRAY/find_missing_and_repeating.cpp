class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        unordered_map<int,int> mp;
        int *ans=new int[2];
        int y=0;
        for(int i=0;i<n;i++)
           mp[arr[i]]++; 
        for(auto it : mp)
        {
            if(it.second==2)
            {
              y=it.first;
              break;
            }
        }
        ans[0]=y;
        for(int i=0;i<n;i++)
        {
            arr[i]=mp[i+1];
            if(arr[i]==0)
            ans[1]=i+1;
        }
     return ans;   
    }
};
