#include <bits/stdc++.h>
using namespace std;
 
void rightRotateByOne(int A[], int n)
{
    int last = A[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        A[i + 1] = A[i];
    }
 
    A[0] = last;
}
 
void rightRotate(int A[], int k, int n)
{
    for (int i = 0; i < k; i++) {
        rightRotateByOne(A, n);
    }
}
 
int main(void)
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<=n;i++)
    {
        cout<<"enter elements of array";
        cin>>A[n];
    }
    cout<<"enter how many roatations needed";
    cin>>k;
 
    rightRotate(A, k, n);
 
    for (int i = 0; i < n; i++) {
        cout<<A[i];
    }
 
    return 0;
}


