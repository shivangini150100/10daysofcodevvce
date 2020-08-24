#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the countSort function below.
void countSort(vector<vector<string>> arr) {


}

int main(){
    long int n;
    cin >> n;

    string ar[n];

    for(long int i = 0; i < n/2; i++){
        int x;
        cin >> x;

        string s;
        cin >> s;

        ar[x] = ar[x] + "-" + " ";

    }

    for(long int i = n/2; i < n; i++){
        int x;
        cin >> x;

        string s;
        cin >> s;

        ar[x] = ar[x] + s + " ";

    }

    for(int i = 0; i < n; i++)
        cout << ar[i];

    return 0;
}

