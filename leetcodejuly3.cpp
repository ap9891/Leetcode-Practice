class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        int n = cells.size();
        if(N%14 == 0)
        {
            N = 14;
        }
        else
        {
            N = N%14;
        }
        vector<int> ans(8,0);

        while(N--)
        {
            for(int i = 1; i < n-1;i++)
            {
                if(cells[i-1] == cells[i+1])
                {
                    ans[i] = 1;
                }
                else
                {
                    ans[i] = 0;
                }
            }
            cells = ans;

        }
        return cells;
        
    }
};