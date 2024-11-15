#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Please enter a string: " << endl;
    getline(cin, text);
    regex duplicate(R"((\w)\1+)");
    smatch matches;

    while (regex_search(text, matches, duplicate)) {
        cout << "Duplicate found: " << matches[0] << endl;
        text = matches.suffix().str();
    }
    return 0;
}
