class Solution
{
    public:
    unsigned int SetBit(int n,int pos)
    {
        // Your code here
        int bitmask = 1<<pos;
        return (bitmask|n);
    }
};
