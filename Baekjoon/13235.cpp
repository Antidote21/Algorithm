#include <iostream>
#include <string>
using namespace std;

int dp[100][100];

bool solve(string s) {
    int n = s.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                dp[i][j] = true;
            else
                dp[i][j] = false;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
        }
    }

    for (int i = 2; i < n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (s[j] == s[j + i] && dp[j + 1][j + i - 1])
                dp[j][j + i] = true;
        }
    }

    return dp[0][n - 1];
}

int main() {
    string str;
    cin >> str;
    bool res = solve(str);
    if (res)
        cout << "true";
    else
        cout << "false";

    return 0;
}

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	bool isFlag = true;
	int len = 0;
	string s;

	cin >> s;

	len = s.length();
	for (int i = 0;i < len / 2;i++) {
		if (s[i] != s[len - 1 - i])
			isFlag = false;
	}

	if (isFlag)cout << "true";
	else cout << "false";
	return 0;
}
