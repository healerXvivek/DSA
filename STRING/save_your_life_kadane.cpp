class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          int sum = 0; string ans ="";
          unordered_map<char , int>mp;
          for(int i = 0 ; i< n;i++){
              mp[x[i]] = b[i];
          }
          int maxi = INT_MIN ; 
          string temp ="";  
          
          for(int i = 0; i < w.size(); i++ ){
              
             sum  += mp[w[i]] ? mp[w[i]]: int(w[i]);
             
             temp +=w[i];
              if(sum > maxi){
                  maxi = sum;
                  ans = temp;
              }
              if(sum < 0){
                  sum = 0;
                  temp= "";
              }
          }
          return ans;
      }
};
