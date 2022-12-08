class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    string temp="";
	    for(int i=0;i<n;i++){
	        temp+=nuts[i];
	    }
    
	    sort(temp.begin(),temp.end());
	    for(int i=0;i<n;i++){
	        nuts[i]=temp[i];
	        bolts[i]=temp[i];
	    }
	}
};
