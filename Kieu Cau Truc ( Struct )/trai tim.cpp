#include<bits/stdc++.h>

using namespace std;
int mu(int a,int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
        sum*=a;
    return sum;
}
int main()
{
    for (int y = 15; y >= -15; y--)
    {
        for (int x = 30; x >= -30; x--)
        {
            if ((mu(x / 2, 2) + mu((5 * y / 4) - 2 * sqrt(abs(x)), 2)) <= 150)
            {
                cout << "n";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "happy men's day" << endl;
    }

    return 0;
}