#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    int orig = x;

    // any negative number is automatically false
    if(x < 0){
        return false;
    }

    // if one digits return true
    if(x >= 0 && x < 10){
        return true;
    }

    // initialize rev num
    long long revNum = 0;

    // reverse the number
    while (x > 0)
    {
        int extract = x % 10;
        revNum = (revNum * 10) + extract;
        x = x/10;
    }

    if(revNum == orig){
        return true;
    }

    return false;
    

        
}

int main()
{
    cout << isPalindrome(-123) << endl;
 
    return 0;
}
