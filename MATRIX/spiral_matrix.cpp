{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        vector<int> ans;
        int top=0,left=0,bottom=r-1,right=c-1;
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            ans.push_back(arr[top][i]);
            top++;
            for(int i=top;i<=bottom;i++)
            ans.push_back(arr[i][right]);
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                ans.push_back(arr[bottom][i]);
                bottom--;
            }
            if(left<=right)
            {
              for(int i=bottom;i>=top;i--)
              ans.push_back(arr[i][left]);
              left++;  
            }
        }
        return ans;
    }
};
