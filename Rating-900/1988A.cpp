#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int cnt = 0;

        if (n == 1)
            cout << cnt << endl;

        else
        {

            int m = 0;
            if (n < k)
            {
                cnt++;
                cout << cnt << endl;
            }

            else
            {
                n -= k;
                m += k;
                cnt += 1;

                while (n != 0)
                {

                    if (n >= (k - 1))
                    {
                        n = n - (k - 1);
                        m += (k - 1);
                    }
                    else
                    {
                        m += n;
                        n = 0;
                    }
                    cnt++;
                }

                cout << cnt << endl;
            }
        }
    }
}