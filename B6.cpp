#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a=1;
        for(int j=0;j<n;j++)
        {
            if(i==0) cout << (j+1) << " ";
            else
            {
                if(i+j+1>n)
                {
                    cout <<a << " ";
                    a++;
                }
                else cout << (i+j+1) << " ";
            }
        }
        cout << endl;
    }
}
