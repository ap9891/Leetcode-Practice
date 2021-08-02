#include<iostream>
using namespace std;
int main()
{
    uint32_t num;
    uint32_t ans=0;

    cin>>num;
    uint32_t arr[100000]={0};
    int k=0;
    while(num != 0)
    {
        int rem = num%10;
        if(rem==0)
        {
            arr[k++]= 0;
        }
        else
        {
        arr[k++]= rem;
        }
        num=num/10;
    }
    for(int i=0; i < k;i++)
    {
        ans= ans*10 + arr[i];
        // cout<<ans<<" ";
        // cout<<arr[i];
    }
    cout<<ans;
    return 0;
}