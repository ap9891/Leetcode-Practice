class Solution {
public:
    int arrangeCoins(int n) {
    int y=n;
    int i=1;
    
    int count=0;
    while(y >= 0)
    {
        int z=y-i;
        if(z >= 0)
        {
            count++;
        }
        i++;
        y=z;
    }
    return count;

        
    }
};