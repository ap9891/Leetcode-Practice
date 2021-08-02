class Solution {
public:
    bool isPalindrome(string s) {
        int s1=0, e= s.length()-1;
        while(s1<e)
        {
            while(s1 < e && !isalnum(s[s1]))
            {
                s1++;
            }
            while(s1 < e && !isalnum(s[e]))
            {
                e--;
            }
            if(tolower(s[s1]) != tolower(s[e]))
            {
                return false;
            }
            s1++;
            e--;
        }
        return true;

    }
};