class Solution{
    public:
     int max_path_sum(int A[], int B[], int n, int m)
    {
        int sum1=0,sum2=0,sum=0;
        int i=0,j=0;
        while(i<n && j<m){
            if(A[i]==B[j]){
                sum+=max(sum1,sum2);
                sum+=A[i];
                i++;
                j++;
                sum1=0;sum2=0;
            }
            else if(A[i]<B[j]){
                sum1+=A[i];
                i++;
            }
            else{
                sum2+=B[j];
                j++;
            }
        }
        while(i<n){
            sum1+=A[i];
            i++;
        }
        while(j<m){
        sum2+=B[j];
        j++;
        }
        sum+=max(sum1,sum2);
        return sum;
    }
};
