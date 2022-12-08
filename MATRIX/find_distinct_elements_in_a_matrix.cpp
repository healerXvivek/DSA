class Solution{
public:
    int distinct(vector<vector<int>> m, int n)
    {
        unordered_set<int> s;
        for(int i=0;i<m[0].size();i++){
            int k=m[0][i];
            int count=1;
            for(int j=1;j<n;j++){
                if(find(m[j].begin(),m[j].end(),k) != m[j].end())
                count++;
            }
            if(count == n)
            s.insert(k);
        }
        return s.size();
    }
};
