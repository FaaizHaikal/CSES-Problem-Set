#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n-1];
    int x;
    for(int i=0;i<n-1;i++)
    {
        cin >> ar[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-1;i++)
        {
            if(ar[j]>ar[i])
            {
                x = ar[i];
                ar[i] = ar[j];
                ar[j] = x;
            }
        }
    }
}