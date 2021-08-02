class Solution {
public:
    string reverseWords(string s) {
    stringstream str(s);
    string word;
    string str1="";
    vector<string> v;
    while(str >> word)
    {
        v.push_back(word);
    }
    reverse(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end();it++)
    {
        if(str1.size())
        str1 +=' ';
        str1 +=*it;
    }
    return str1;
        
    }
};