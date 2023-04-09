class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>s;
        s.push(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(s.size()==0){
                s.push(arr[i]);
            }else if((s.top()>=0 && arr[i]>=0) || (s.top()<0 && arr[i]<0)){
                s.push(arr[i]);
            }else{
                s.pop();
            }
        }
        vector<int>ans;
        while(!s.empty()){
            ans.insert(ans.begin(),s.top());
            s.pop();
        }
        return ans;
    }
};
