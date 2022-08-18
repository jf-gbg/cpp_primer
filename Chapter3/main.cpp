#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

#include <string>
using std::string;

#include <cctype>
using std::isspace;

#include <vector>
using std::vector;

int main() {
   int ia[] = {0,2,4,6,8};
   int *beg = begin(ia);
   int *last = end(ia);
   while(beg != last) {
       *beg = 0;
       beg++;
   }

    for (auto i:ia) {
        cout << i << " ";
    }

    cout << endl;
}
