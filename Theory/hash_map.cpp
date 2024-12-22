#include<bits/stdc++.h>
using namespace std;

void mapp(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    // pre compute
    // number, frequency
    map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetch
        cout << mpp[number];
    }
}

int main()
{
 
    return 0;
}