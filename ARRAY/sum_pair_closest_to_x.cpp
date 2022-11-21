class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
       int i = 0 , j = arr.size()-1;  
       int diff = INT_MAX;            
       int l =0 , r = 0;                  
       while(i < j){                 
           
           if(abs(arr[i] + arr[j] - x) < diff){
                l = i ; r= j;
               diff = abs(arr[i] + arr[j] - x);
           }
          
           else if(arr[i] + arr[j] < x) i++; 
           else j--;
       }
       return {arr[l] , arr[r]};
    }
};
