class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;   
        int j = b.length()-1;
        string s="";
        char c = '0';
        while(i>=0 && j>=0)
        {
            if(a[i]=='1'&&b[j]=='1')
            {
                if(c=='1')
                {
                    s += '1'; c = '1';
                }
                else
                {
                    s += '0'; c = '1';
                }
            }
            else if((a[i]=='1' && b[j]=='0')||(a[i]=='0'&& b[j]=='1'))
            {
                if(c=='1')
                {
                    s += '0' ; c = '1';
                }
                else
                {
                    s += '1'; c='0';
                }
            }
            else
            {
                if(c=='1')
                {
                    s += '1' ; c = '0';
                }
                else if(c=='0')
                {
                    s += '0' ; c = '0';
                }
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            if(a[i]=='1')
            {
                if(c == '1')
                {
                    s += '0' ; c = '1';
                }
                else
                {
                    s += '1' ; c+= '0';
                }
            }
            else
            {
                if(c == '1')
                {
                    s += '1' ; c= '0';
                }
                else
                {
                    s +='0' ;  c+= '0';
                }
            }
            i--;
        }
        while(j>=0)
        {
            if(b[j]=='1')
            {
                if(c == '1')
                {
                    s += '0' ; c = '1';
                }
                else
                {
                    s += '1' ; c+= '0';
                }
            }
            else
            {
                if(c == '1')
                {
                    s += '1' ; c = '0';
                }
                else
                {
                    s +='0' ;  c+= '0';
                }
            }
            j--;
        }
        if(c=='1')
        {
            s+='1';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};