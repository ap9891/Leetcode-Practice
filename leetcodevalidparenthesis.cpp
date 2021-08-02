class Solution {
public:
    bool isValid(string s){
        stack<char> s1;
        char top;
        for(int i=0; s[i] != '\0' ;i++)
        {
            if(s[i] == '(' || s[i]== '{' ||s[i] == '[')
            {
                s1.push(s[i]);
                continue;
            }
                if(s1.empty())
                {
                    return false;
                }
                switch(s[i])
                {
                    case ')':
                        top=s1.top();
                        s1.pop();
                        if(top == '{' || top=='[')
                        {
                            return false;
                        }
                        break;
                    case '}':
                        top=s1.top();
                        s1.pop();
                        if(top == '(' || top=='[')
                        {
                            return false;
                        }
                        break;
                    case ']':
                        top=s1.top();
                        s1.pop();
                        if(top == '(' || top=='{')
                        {
                            return false;
                        }
                        break;
                }
            
        }
        return (s1.empty());
        
    }
};