class Solution {
public:
    bool wordPattern(string pattern, string str) {
        stringstream str1(str);
        string word;
        vector<string> s;
        while(str1>>word)
        {
            s.push_back(word);
        }
        if(pattern.length() != s.size())
        {
            return false;
        }
        map<string,vector<int>> m;
        map<char,vector<int>> m1;
        for(int i=0 ;i<s.size();i++)
        {
            m[s[i]].push_back(i);
            m1[pattern[i]].push_back(i);
        }
        for(int i=0 ;i < s.size();i++)
        {
            if(m1[pattern[i]] != m[s[i]])
            {
                return false;
            }
        }
        return true;
        }
};