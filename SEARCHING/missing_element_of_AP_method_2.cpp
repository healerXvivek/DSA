class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d=(arr[n-1]-arr[0])/n;
        int l=0,h=n-1, mid;
        while(l<h){
            mid=(l+h)/2;
            if(arr[mid]-d!=arr[mid-1]){
                return arr[mid]-d;
            }
            else if(arr[mid]+d!=arr[mid+1]){
                return arr[mid]+d;
            }
            else{
                if(arr[mid]+(h-mid)*d==arr[h]){
                    h=mid;
                }else{
                    l=mid;
                }
            }
            
        }
    }
};
