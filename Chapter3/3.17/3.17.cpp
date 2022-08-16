#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::isspace;

#include <vector>
using std::vector;

int problem317() {
    string word;
    vector<string> words;

    while (cin >> word) {
        words.push_back(word);
    }

    for (auto &s : words) {
        for (auto &c: s) {
            c = toupper(c);
        }
    }

    for (decltype(words.size()) i = 0; i != words.size(); ++i) {
        cout << words[i] << " ";

        if ((i + 1) % 8 == 0) {
            cout << endl;
        }
    }
}