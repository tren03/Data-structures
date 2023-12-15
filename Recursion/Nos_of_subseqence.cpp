#include <iostream>
#include<vector>
using namespace std;
int f(int i,vector<int> a,vector<int> arr,int n)
{
    if(i>=n)
    {
        return 1;
    }
    a.push_back(arr[i]);
    int l = f(i+1,a,arr,n);
    a.pop_back();
    int r = f(i+1,a,arr,n);
    return l+r;
}

int main() {
    vector<int> arr{1,2,1};
    int n = arr.size();
    vector<int> a;
    cout<<f(0,a,arr,n);
    return 0;
}
