class Solution {
public:
    int addDigits(int num) {
        if(num%9==0)
        {
            return (num>=9)?9:0;
        }
        else
        {
            return num%9;
        }
    }
};