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

int exercise325() {
    vector<unsigned> scores (11, 0);
    unsigned grade;
    int n = 0;
    int i = 0;

    while(cin >> grade) {
        if(grade <= 100) {
            n = grade / 10;
            i = 0;
            for(auto beg = scores.begin();
                beg != scores.end(); beg++, i++) {
                if(i == n) {
                    ++*beg;
                }
            }
        }
    }

    for(auto s : scores) {
        cout << s << endl;
    }

    return 0;
}