class Solution {
public:
    double power(double y,int t)
    {
        double result = 1;
        while(t != 0)
        {
            if(t&1)
            {
                result *= y;
            }
            y *= y;
            t /= 2;
        }
        return result;
    }
    double myPow(double x, int n) {
        return (n<0) ? (1/power(x,n)):power(x,n);
    }
};
//note: STL pow(x,n) 