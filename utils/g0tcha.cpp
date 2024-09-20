#include <iostream>
#include <string>
#include <vector>
using namespace std;

string generateString() {
    auto tochip = [](int num) -> string {
        string chipStr;
        if (num < 0 || num > 255) return "";
        char buffer[3];
        snprintf(buffer, sizeof(buffer), "%02x", num);
        chipStr = buffer;
        return chipStr;
    };

    vector<int> chipParts = {103, 48, 116, 99, 104, 117, 32, 110, 48, 119, 32, 108, 49, 116, 116, 108, 51, 32, 109, 48, 117, 115, 51};

    string result;
    for (int part : chipParts) {
        result += static_cast<char>(part);
    }

    return result;
}

int main() {
    string result = generateString();

    cout << result << endl;

    return 0;
}