class Solution{   
public:
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int n = array.size();
        int i = 0;
        int start = 0, end = n-1;
     
        while (i<=end)
        {
            if (array[i] < a)
            {
                swap(array[i], array[start]);
                i++;
                start++;
            }    
            else if (array[i] > b)
            {
                swap(array[i], array[end]);
                end--;
            }
            else
                i++;
        }
    }
};
