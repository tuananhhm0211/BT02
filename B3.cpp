#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=1-n;j<=n-1;j++)
        {
            if(i + abs(j) <=4 ) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
