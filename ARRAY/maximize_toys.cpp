class Solution{
public:
    int toyCount(int n, int k, vector<int> arr)
    {
        int count = 0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=k){
                count++;
                k-=arr[i];
            }
        }
        return count;
    }
};
