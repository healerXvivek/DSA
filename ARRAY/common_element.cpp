class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            unordered_map<int,int> mp1,mp2,mp3;
            vector<int> v;
            for(int i=0;i<n1;i++)
            mp1[a[i]]++;
            for(int i=0;i<n2;i++)
            mp2[b[i]]++;
            for(int i=0;i<n3;i++)
            mp3[c[i]]++;
            for(int i=0;i<n1;i++)
            {
                if(mp1[a[i]] and mp2[a[i]] and mp3[a[i]] )
                {
                  v.push_back(a[i]);
                  mp1[a[i]]=0;
                }
            }
            return v;
        }
};
