#include<iostream>
#include<cmath>

using namespace std;
bool kt(unsigned int n)
{
    if(n==0 || n==1) return false;
    else
    {
        for(int i=2;i<sqrt(n);i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
}
int main()
{
    int n;
    do
    {
        cin >> n;
    }
    while(n<0);
    if(kt(n)) cout << "yes";
    else cout << "no";
    return 0;
}
