#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    queue<string> a;

    while (Q--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            string name;
            cin >> name;
            a.push(name);
        }
        else if (n == 1)
        {
            if (!a.empty())
            {
                cout << a.front() << endl;
                a.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
