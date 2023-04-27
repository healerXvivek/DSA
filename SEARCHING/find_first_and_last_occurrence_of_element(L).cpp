class Solution {
public:
    int first(vector<int>& arr,int x){
        int s=0;
        int n=arr.size()-1;
        int e=n;
        int res=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]<x)
            s=mid+1;
            else if(arr[mid]>x)
            e=mid-1;
            else{
                res=mid;
                e=mid-1;
            }
        }
        return res;
    }

    int last(vector<int>& arr,int x){
        int s=0;
        int n=arr.size()-1;
        int e=n;
        int res=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]<x)
            s=mid+1;
            else if(arr[mid]>x)
            e=mid-1;
            else{
                res=mid;
                s=mid+1;
            }
        }
        return res;
    }

    vector<int> searchRange(vector<int>& arr, int target) {
        if(arr.size()==1 && arr[0]==target)
        return {0,0};
        int x=first(arr,target);
        int y=last(arr,target);
        return {x,y};
    }
};
