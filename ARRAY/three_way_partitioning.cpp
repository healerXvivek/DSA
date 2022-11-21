class Solution{   
public:
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        int n = arr.size();
        int i = 0; 
        int j = n - 1;
        int idx = 0;
        while(idx <= j){
            if(arr[idx] < a){
                swap(arr[idx], arr[i]);
                i++;
                idx++;
            }
            else if(arr[idx] > b){
                swap(arr[idx], arr[j]);
                j--;
            }
            else{
                idx++;
            }
        }
        return;
    }
};
