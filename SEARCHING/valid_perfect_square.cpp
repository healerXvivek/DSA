class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=0;
        int e=num;
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(mid * mid == num)
            return 1;
            else if (mid * mid < num)
            s = (int)mid + 1;
            else 
            e =(int) mid - 1;
        }
        return 0;
    }
};
