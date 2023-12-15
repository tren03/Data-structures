#include <iostream>
#include<vector>
using namespace std;
void f(int i,vector<int> a,vector<int> arr,int n,int s)
{
    if(i>=n)
    {
        if (s==2)
        {
            for(auto i : a)
            {
                cout<<i;
            }
            cout<<endl;
        }
        return;
    }
    a.push_back(arr[i]);
    s+=arr[i];
    f(i+1,a,arr,n,s);
    a.pop_back();
    s-=arr[i];
    f(i+1,a,arr,n,s);
}

int main() {
    vector<int> arr{1,2,1};
    int n = arr.size();
    int s;
    vector<int> a;
    f(0,a,arr,n,s);
    return 0;
}
