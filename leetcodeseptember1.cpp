class Solution {
public:
    bool static comparator(int a,int b)
    {
        return a>b;
    }
    string largestTimeFromDigits(vector<int>& A) {
        string arr = "";
        sort(A.begin(),A.end(),comparator);
       do
       {
           string hour = to_string(A[0]) + to_string(A[1]);
           string min = to_string(A[2])+to_string(A[3]);
           if(hour < "24" && min < "60")
           {
               return hour+":"+min;
           }
        }while(prev_permutation(A.begin(),A.end()));
        return "";
    }
};