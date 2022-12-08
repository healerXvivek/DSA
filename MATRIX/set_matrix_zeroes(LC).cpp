class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int n1=m.size();
        int n2=m[0].size();
      
        vector<int>row(n1,0), col(n2,0);
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(m[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
      
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)

            {
                if(row[i]==1||col[j]==1)
                {
                    m[i][j]=0;
                }
            }
        }
    }
};
