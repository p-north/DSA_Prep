#include<bits/stdc++.h>
using namespace std;

int evenlyDivides(int n) {
        // code here
        int count = 0;
        int copy = n;
        while(copy != 0){
            int extract = copy % 10;
            if(extract != 0 && n % extract == 0){
                count++;
            }
            
            copy = copy/10;
        }
       
        
        return count;
    }

int main()
{
    int num = 20;
    cout << evenlyDivides(num) << endl;
 
    return 0;
}