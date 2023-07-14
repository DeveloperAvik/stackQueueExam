#include <bits/stdc++.h>
using namespace std;

class sQcomp {
public:
    bool check(int n, int m, vector<int>& listA, vector<int>& listB) {
        stack<int> stackA;
        queue<int> queueB;

        for (int i = n - 1; i >= 0; i--) {
            stackA.push(listA[i]);
        }

        for (int i = 0; i < m; i++) {
            queueB.push(listB[i]);
        }

        while (!stackA.empty() && !queueB.empty()) {
            if (stackA.top() != queueB.front()) {
                return false;
            }

            stackA.pop();
            queueB.pop();
        }
        return stackA.empty() && queueB.empty();
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> listA(n);
    for (int i = 0; i < n; i++) {
        cin >> listA[i];
    }

    vector<int> listB(m);
    for (int i = 0; i < m; i++) {
        cin >> listB[i];
    }

    sQcomp comp;
    bool result = comp.check(n, m, listA, listB);

    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
