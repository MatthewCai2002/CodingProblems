#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ans;
    while (n--) {
        unordered_map<char, int> map;
        string init, fin;
        cin >> init >> fin;
        for (char c : fin) {
            if (map[c] == NULL) {
                int initCount = count(init.begin(), init.end(), c);
                int finCount = count(fin.begin(), fin.end(), c);
                int diff = initCount - finCount;
                // if (diff < 0) {
                //     ans.push_back("NO");
                // }
                map[c] = diff;
            }
        }

        for (int i = 0; i < init.length(); i++) {
            // delete all letters that aren't in fin
            if (!map.count(init[i])) {
                init[i] = ' ';
            }

        }

        for (auto pair : map) {
            int i = 0;
            while (pair.second > 0 && i < init.length()) {
                if (init[i] == pair.first) {
                    init[i] = ' ';
                    pair.second--;
                }
                i++;
            }
        }

        init.erase(remove(init.begin(), init.end(), ' '), init.end());

        if (init == fin) {
            ans.push_back("YES");
        } else {
            ans.push_back("NO");
        }

    }    
    for (string s : ans) {
        cout << s << endl;
    }
    return 0;
}