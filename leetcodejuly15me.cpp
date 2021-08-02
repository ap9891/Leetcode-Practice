// #include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;
string reverseWords(string s) 
{
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
int main()
{
    string s = "the sky is blue";
    cout<<reverseWords(s);
    // reverseWords(s);
    return 0;
}