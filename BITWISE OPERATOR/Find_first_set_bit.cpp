class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        if(n==0){
            return 0;
        }
        int i=1;
        
        
        while(n>0){
            if(n&1){
                return i;
            }
            
            i++;
            n>>=1;
        }
    }
};
