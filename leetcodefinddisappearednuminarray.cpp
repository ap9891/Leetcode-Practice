//code not working
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> numbers(vector<int> v,int n)
{
    vector<int> ans;
    int len = v.size();
    // int *arr = new int(n);
    int arr[n]={0};
    
    for(int i=0;i<n;i++)
    {
        int index = v[i];
        arr[index]++;
    }
    for(int i=0 ;i < n ;i++)
    {
        // cout<<arr[i]<<" ";
        if(arr[i]==0)
        {
            if(i==0)
            {
                continue;
            }
            else
            {
            // cout<<i<<" ";
            ans.push_back(i);
            }
        }
    }
    // cout<<endl;
    // for(int i=0 ;i < n ;i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    return ans;
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int data;
    for(int i=0; i< n; i++)
    {
        cin>>data;
        v.push_back(data);
    }
    // for(int i=0 ;i < n ;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // numbers(v,n);
    vector<int> v1 ;
    v1 = numbers(v,n);
    for(int i=0; i < v1.size() ;i ++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
    
}