#include <iostream>
#include<vector>
using namespace std;
int f(int i,vector<int> a,vector<int> arr,int n,int s)
{
    if(i>=n)
    {
        if (s==2)
         {
             return 1;
         }
        else 
        {
            return 0;
        }
    }
    a.push_back(arr[i]);
    s+=arr[i];
    int l = f(i+1,a,arr,n,s);
    a.pop_back();
    s-=arr[i];
    int r = f(i+1,a,arr,n,s);
    return l+r;
}

int main() {
    vector<int> arr{1,2,1};
    int n = arr.size();
    int s;
    vector<int> a;
    cout<<f(0,a,arr,n,s);
    return 0;
}
