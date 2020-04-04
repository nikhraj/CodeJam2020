#include <bits/stdc++.h>
using namespace std;
void solve()
{
        int test=1;
        string a;
        cin >> a;
        vector<int> vc;
        int n = a.length();
        for (int i = 0; i < n; i++)
        {
            vc.push_back(a[i] - '0');
        }
        cout << "Case #" << test << ": ";
        int cc = vc[0];
        while (cc--)
        {
            cout << '(';
        }
        cout << vc[0];

        for (int i = 1; i < n; i++)
        {
            if (vc[i] - vc[i - 1] > 0)
            {
                int c = abs(vc[i] - vc[i - 1]);
                while (c--)
                {
                    cout << '(';
                }
                cout << vc[i];
            }
            else if (vc[i] - vc[i - 1] == 0)
            {
                cout << vc[i];
            }
            else
            {
                int c = abs(vc[i] - vc[i - 1]);
                while (c--)
                {
                   cout << ')';
                }
                cout << vc[i];
            }
        }
        while (vc[n - 1]--)
        {
           cout << ')';
        }

        cout << " " << endl;
        
        test+=1;

}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
