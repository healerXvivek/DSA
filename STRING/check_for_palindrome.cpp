class Solution{
public:	
	int isPalindrome(string str)
	{
     int s=0;
     int e=str.length()-1;
     while(s<=e)
     {
         if(str[s]==str[e])
         {
             s++;
             e--;
         }
         else
         return 0;
     }
     return 1;
	}
};
