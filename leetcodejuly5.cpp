class Solution {
public:
    int hammingDistance(int x, int y) {
    int count =0;
    int s = x^y;
    int k=0;
    for(int i = s ; i != 0 ; i>>=1)
    {
        k++;
        if(i&1==1)
        {
            count++;
        }
    }
    return count;
        
    }
};