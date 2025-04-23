#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Ensure input length matches the expected size
        if (s.length() != n) {
            cout << "NO" << endl;
            continue;
        }

        // Checking for the "meow" pattern
        bool isValid = true;
        string target = "meow";
        int j = 0; // Pointer for the target string

        for (int i = 0; i < n; i++) {
            char current = tolower(s[i]);

            if (current == target[j]) {
                continue; // Continue if current matches the current target character
            } else if (j < target.length() - 1 && current == target[j + 1]) {
                j++; // Move to the next character in the target string
            } else {
                isValid = false;
                break;
            }
        }

        // Check if the full "meow" pattern is matched
        if (j != target.length() - 1) {
            isValid = false;
        }

        cout << (isValid ? "YES" : "NO") << endl;
    }

    return 0;
}

