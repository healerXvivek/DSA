class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      unordered_set<int> s(arr,arr+n);
      int res=1;
      for(int i=0;i<n;i++){
          if(s.find(arr[i]-1) == s.end()){
              int curr=1;
              while(s.find(arr[i]+curr) !=s.end())
              curr++;
          res=max(res,curr);
      }
    }
    return res;
    }
};
