class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> last_index(26,0);
        for(int i =0 ;i < S.length(); i++)
        {
            int index = S[i]-'a';
            last_index[index] = i;
        }
        int start=0;
        int l =0;
        vector<int> v;
        for(int i = 0 ; i < S.length(); i++)
        {
            l = max(l,last_index[S[i]-'a']);
            if(l==i)
            {
                v.push_back(i-start+1);
                start = i+1;
            }
        }
        return v;
    }
};