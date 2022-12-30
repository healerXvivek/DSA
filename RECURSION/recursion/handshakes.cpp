class Solution{
public:
    
    int findCatalan(int x){
       if(x==0 || x==1)
       return 1;
       int result = 0;
       for(int i = 0;i < x; i++)
           result+=findCatalan(i)*findCatalan(x-i-1);
           
       return result;
   }
   int count(int N){
       // code here
       int res = findCatalan(N/2);
       return res;
   }
}; 
