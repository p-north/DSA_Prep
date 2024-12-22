#include <bits/stdc++.h>
using namespace std;

void numberhashing()
{
    // basic hashing
    /*
    size
    array
    numbers
    1
    3
    2
    3
    12
    */

    // take input
    int n;
    cin >> n;
    int arr[n];
    for (int = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre compute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    // take input
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
}

void charHashing()
{
    /*
        string
        number of queries
        a,g,h,b,c

    */

    string s;
    cin >> s;
    // pre compute
    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c] << endl;
    }
}

int main()
{

    return 0;
}