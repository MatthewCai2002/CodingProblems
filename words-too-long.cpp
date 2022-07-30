#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> words;
    for (int i = n; i >= 0; i--) {
        string str;
        getline(cin, str);
        words.push_back(str);
    }

    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        int len = word.length();
        if (len > 10) {
            string abbrev;
            char first = word[0];
            char last = word[len - 1];
            abbrev.push_back(first);
            abbrev.append(to_string(len - 2));
            abbrev.push_back(last);
            words[i] = abbrev;
        } 
    }

    while (!words.empty()) {
        cout << words.front() << endl;
        words.erase(words.begin());
    }

    return 0;
}