class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range complete the function here
        int s=l;
        int e=h;
        int mid= s +(e-s)/2;
        while(s<=e)
        {
            if (A[mid]==key)
            {
                return mid;
            }
            else if (A[mid]>=A[s])
            {
                if (key>=A[s] && key<=A[mid])
                {
                    e=mid-1;
                }
                else
                {
                    s= mid+1;
                }
            }
            else 
            {
                if (key>=A[mid] && key<=A[e])
                {
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }
};
