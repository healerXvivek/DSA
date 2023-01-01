class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int n=s.length();
		    vector<string> v;
		    int pow_size=pow(2,n);
		    
		    for(int counter=0; counter < pow_size; counter++){
		        string str="";
		        for(int j=0;j<n;j++){
                    if(counter & (1 << j)){
                    str+=s[j];
                    }
		    }
		    if(str.size()!=0)
		    v.push_back(str);
		    }
		    sort(v.begin(),v.end());
		    return v;
		}
};

