#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    int arr[r+1] = {0};
    arr[0] = 1;
    for(int i=1; i<=n; i++)
        for(int j=min(i,r); j>0; j--)
            arr[j] +=arr[j-1];
    return arr[r];
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << nCr(a, b) << endl;
    return 0;
}
