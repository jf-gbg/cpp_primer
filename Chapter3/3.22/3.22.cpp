#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int exercise322() {
    vector<string> text {"buzzwords", "cicero", "classic", "client kafka", "office", "", "pulpfiction"};

    for (auto it = text.begin();
         it != text.end() && !it->empty(); ++it) {
        for(auto &c : *it) {
            c = toupper(c);
        }
    }

    for (auto word : text) {
        cout << word << endl;
    }

    return 0;
}