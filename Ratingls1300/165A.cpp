#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p[i] = {a, b};
    }

    
    int spPoint = 0;

    for (int i = 0; i < n; i++)
    {   
        bool right = false;
        bool left = false;
        bool upper = false;
        bool lower = false;
        int x1 = p[i].first;
        int y1 = p[i].second;

        for (int j = 0; j < n; j++)
        {

            if (j != i)
            {
                int x2 = p[j].first;
                int y2 = p[j].second;

                if (y1 == y2 and x1 > x2)
                    left = true;
                else if (y1 == y2 and x1 < x2)
                    right = true;
                else if (x1 == x2 and y1 > y2)
                    lower = true;
                else if (x1 == x2 and y1 < y2)
                    upper = true;
            }
        }

        if ((left && right) && (lower && upper))
        {
            spPoint++;
             
        }
    }

    cout << spPoint << endl;
}