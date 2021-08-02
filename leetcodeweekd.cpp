 #include<iostream>
 #include<string.h>
 #include<set>
 using namespace std;
 void numSub(string s) {
        set<string> result;

        int n=s.length();
        string a="";
        int count=0,one=0;
        // int i;
        for(int i =0 ; i < n;i++)
        {
            if(s[i] == '1')
            {
                // a[i]=s[i]
                count++;
            }
        }
        cout<<count<<" ";
        // for(int j=0;j< count;j++)
        // {
        //     a[j]='1';
        // }
        // for(int j=0;j< count;j++)
        // {
        //     cout<<a[j];
        // }
         for(int i=0;i<count;i++)
      {
          for(int j=1;j<=count-i;j++)
          {
              one++;
          }
      }
        // return 0;
        cout<<one%1000000007;
    }
    int main()
    {
        string s="0110111";
        // int n;
        //  cin>>n;
        // cin.get();
        // for(int i=0; i <n;i++)
        // {
        //     getline(cin,s[i]);
        // }
        numSub(s);
        return 0;
    }