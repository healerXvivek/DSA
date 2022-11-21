class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int m=array1.size();
        int n=array2.size();
        vector<int> arr;
        double median=0;
        
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(array1[i]<=array2[j])
            {
                arr.push_back(array1[i]);
                i++;
            }
            else 
            {
                arr.push_back(array2[j]);
                j++;
            }
            
        }
        if(i<m)
        {
            while(i<m)
            {
             arr.push_back(array1[i]);
             i++;  
            }
        }
        if(j<n)
        {
            while(j<n)
            {
             arr.push_back(array2[j]);
             j++;  
            }
        }
        int s=arr.size();
        if(s%2==0)
        {
          median=(double)(arr[(s/2)-1]+arr[(s/2)]);
          median/=2.0;
        }
        else
        {
          median=arr[(s/2)];
        }
        return median;
    }
};
