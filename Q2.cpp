#include <iostream>
#include <vector>

using namespace std;

struct Record {
    int id;
    string isValid;
    string errorMessage;
};

int main() {
    int n, id;
    cin >> n;
    string isValid;
    string errorMessage;
    vector<Record> errors;
    for (int i = 0; i < n; i++) {
        cin >> id >> isValid;
        if (isValid == "false") {
            cin >> errorMessage;
        }
        errors.push_back({id, isValid, errorMessage});
    }

    bool allValid = true;
    vector<string> errorCodes;
    for (auto r: errors) {
        if (r.isValid == "false") {
            allValid = false;
            errorCodes.push_back(r.errorMessage);
        }
    }

    if (allValid) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
        for (auto c: errorCodes) {
            cout << c << " ";
        }
    }
}