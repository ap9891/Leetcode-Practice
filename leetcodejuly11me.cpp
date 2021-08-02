#include<iostream>
using namespace std;
void findsubsets(int n, int *arr)
{
    int k=0;
    while(n !=0 )
    {
        if((n&1)==1)
        {
            cout<<arr[k]<<" ";
        }
        k++;
        n=n>>1;
    }
    cout<<endl;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i < n ; i++)
    {
        cin>>arr[i];
    }
    for(int j =0 ; j < (1<<n);j++)
    {
        findsubsets(j,arr);
    }
    return 0;
}