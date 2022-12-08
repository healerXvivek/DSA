class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
      
       unordered_map<int,int> m;
       int count=0;
      
       for(int i=0;i<n;i++){
            if(m.find(k-arr[i])!= m.end()){
               count+=m[k-arr[i]];
        }
          m[arr[i]]++;
       }
      
     return count;
    }
};
