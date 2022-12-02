class Solution{
  public:
    bool check(string str){
      int l = str.size();
      if( l<=0 || l >= 4 ) return false;
      if(str[0] == '0' && l>1){
          return false;
      }
      int d= stoi(str);
      if( d>255 || d<0 ) return false;
      
      return true;
  }
  
   string generate(string &s , int i  , int j , int k , int n){
       string s1 = s.substr(0 , i+1);
       string s2 = s.substr(i+1 , j-i);
       string s3 = s.substr(j+1 , k-j);
       string s4 = s.substr(k+1 , n-k-1);
       
       if(check(s1) and check(s2) and check(s3) and check(s4)){
           return s1+"."+s2+"."+s3+"."+s4;
       }
       return "";
       
   }
    vector<string> genIp(string &s) {
        // Your code here
      int n = s.size();
      vector<string>ans;
      if(n<4)return ans;
       for(int i = 0 ;i< n ; i++){
          for(int j = i+1; j < n ; j++){
              for(int  k =j+1; k < n ; k++){
                  string st = generate(s , i , j , k, n);
                  if(st.size() > 0)
                      ans.push_back(st);
                  
              }
          }
      }
      
      return ans;
      
      
    }
};
