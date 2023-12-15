#include <iostream>
#include<vector>
using namespace std;
void f(int i,vector<int> a,vector<int> arr,int n)
{
    if(i>=n)
    {
        for(auto i : a)
        {
            cout<<i;
        }
        cout<<endl;
        return;
    }
    a.push_back(arr[i]);
    f(i+1,a,arr,n);
    a.pop_back();
    f(i+1,a,arr,n);
}

int main() {
    vector<int> arr{3,1,2};
    int n = arr.size();
    vector<int> a;
    f(0,a,arr,n);
    return 0;
}
