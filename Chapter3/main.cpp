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

int main() {
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

//42
//65
//95
//100
//39
//67
//95
//76
//88
//76
//83
//92
//76
//93