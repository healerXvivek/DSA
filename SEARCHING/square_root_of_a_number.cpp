class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long s = 1;
        long long e = x;
        long long ans = s;
        while(s <= e){
            long long mid = s + (e - s)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid > x){
                e = mid - 1;
            }
            else{
                ans = max(mid, ans);
                s = mid + 1;
            }
        }
        return ans;   
    }
};
