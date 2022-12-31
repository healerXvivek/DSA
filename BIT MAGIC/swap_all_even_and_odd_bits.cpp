/*
we need to swap odd bits with even bits.
Let us consider given example of 23
Binary of 23 is 00010111 
Now lets look the approach :
        Binary:    00010111
        Index:     76543210
Now we have to swap even with odd. We will extract even separate and odd separate.
After separation we want to right shift the odd-indexed numbers and left shift even-indexed numbers.
    
Above example:
      Even index number =  00010111
     & with                10101010           
           Result1:        00000010  
  
 Odd index number =       00010111
     & with               01010101           
           Result2:       00010101

Now what we want is to move odd-indexed to right and even-Indexed to left
   so   Result1=00000001 
       Result2= 00101010
 Now do | =  00101011   =32+8+3=43
 
 
 NOTE :
 Binary representation of 5 is 0101. So 0X55555555 has 16 ones, 16 zeros and the ones,zeros take alternate positions. 
 Similarly 0X33333333 has 16 ones, 16 zeros and 2 consecutive ones, 2 consecutive zeros alternate.
 
 */



class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	int evenPosBits = (n&0xAAAAAAAA);  //  0xAAAAAAAA represents binary with even positions set as 1
	int oddPosBits = (n&(0xAAAAAAAA>>1));//or (n&0x55555555) // 0x55555555 represents binary with odd positions set as 1
	// you can also use int oddPosBits = (n&0x55555555);    
	return (evenPosBits>>1)|(oddPosBits<<1);
    }
};
