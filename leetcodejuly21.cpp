class Solution {
public:
    bool issafe(vector<vector<char>>& board,int i, int j)
    {
        int n = board.size();
        int m = board[0].size();
        return (i>=0 && i <n && j>=0 && j <m);
        
    }
    bool match(vector<vector<char>>& board, string word, int i ,int j, int pos)
    {
        if(board[i][j] != word[pos])
        {
            return false;
        }
        if(pos == word.length()-1)
        {
            return true;
        }
        board[i][j] = '*';
        if(issafe(board,i+1,j))
        {
            if(match(board,word,i+1,j,pos+1))
            {
                return true;
            }
        }
        if(issafe(board,i,j+1))
        {
            if(match(board,word,i,j+1,pos+1))
            {
                return true;
            }
        }
        if(issafe(board,i-1,j))
        {
            if(match(board,word,i-1,j,pos+1))
            {
                return true;
            }
        }
        if(issafe(board,i,j-1))
        {
            if(match(board,word,i,j-1,pos+1))
            {
                return true;
            }
        }
        board[i][j] = word[pos];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0 ;i < board.size(); i++)
        {
            for(int j =0 ; j < board[i].size(); j++)
            {
                if(board[i][j] == word[0])
                {
                    if(match(board,word,i,j,0))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};