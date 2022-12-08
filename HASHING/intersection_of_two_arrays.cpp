class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
      
        unordered_set<int> s;
        int ans=0;
      
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
      
        for(int j=0;j<m;j++){
            if(s.find(b[j]) != s.end()){
                ans++;
                s.erase(b[j]);
            }
        }
      
        return ans;
    }
};
