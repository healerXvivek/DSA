# https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1

class Solution{
public:
    vector<int> minPartition(int n)
    {
        vector<int> coin{ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        vector<int> ans;
        int i=coin.size()-1;
            while(n>0){
                if(coin[i]>n){
                  i--;
                  continue;  
                }
                ans.push_back(coin[i]);
                n-=coin[i];
            }
        return ans;
    }
};
