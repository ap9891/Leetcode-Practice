class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str2 ="",str1="";
        for(int i =0 ; i < s.length()/2; i++)
        {
            str1 = s.substr(0,i+1);
            str2 = str1;
            while(str2.length() < s.length())
            {
                str2 += str1;
            }
            if(str2 == s)
            {
                return true;
            }
        }
        return false;
    }
};