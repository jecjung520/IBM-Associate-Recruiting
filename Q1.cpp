#include <iostream>
#include <vector>

using namespace std;

int compare(string s1, string s2) {
    int xCount1 = 0, xCount2 = 0;
    if (s1.length() > 1) {
        while (s1[start++] == 'X') xCount1++;
        if (s1[s1.length()-1] == 'S') xCount1 = -xCount1;
    }
    else {
        if (s1[0] == 'M') xCount1 = 1;
    }
    if (s2.length() > 1) {
        while (s2[start++] == 'X') xCount2++;
        if (s2[s2.length()-1] == 'S') xCount2 = -xCount2;
    }
    else {
        if (s2[0] == 'M') xCount2 = 1;
    }
    
    
    if (xCount1 > xCount2) return -1;
    else if (xCount1 == xCount2) return 0;
    else return 1;
}

int sendRequest(vector<string>& t_shirts, vector<string>& t_requests) {
    sort(t_requests.begin(), t_requests.end(), compare());
    
}

int main() {
    int t_count, t_request;
    cin >> t_count;
    vector<string> t_shirts(t_count);
    for (int i = 0; i < t_count; i++) {
        cin >> t_shirts[i];
    }
    cin >> t_request;
    for (int i = 0; i < t_request; i++) {
        cin >> t_request[i];
    }
    cout << sendRequest(t_shirts, t_request);
}