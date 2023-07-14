#include <bits/stdc++.h>
using namespace std;

class sQcomp {
public:
    string check(int a, int b, vector<int>& listA, vector<int>& listB) {
        stack<int> stackA;
        queue<int> queueB;

        for (int i = 0; i < a; i++) {
            stackA.push(listA[i]);
        }

        for (int i = 0; i < b; i++) {
            queueB.push(listB[i]);
        }

        vector<int> listC; 
        vector<int> listD;

        while (!stackA.empty()) {
            listC.push_back(stackA.top());
            stackA.pop();
        }

        while (!queueB.empty()) {
            listD.push_back(queueB.front());
            queueB.pop();
        }

        if (listC == listD) {
            return "YES";
        } else {
            return "NO";
        }
    }
};

int main() {
    int a, b;
    cin >> a >> b;
    sQcomp comp;
    vector<int> listA(a);
    vector<int> listB(b);
    for (int i = 0; i < a; i++) {
        cin >> listA[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> listB[i];
    }


    string result = comp.check(a, b, listA, listB);
    cout << result << endl;

    return 0;
}
