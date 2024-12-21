#include<bits/stdc++.h>
using namespace std;

int fiv(int x){

    int sum = 0;
    for(int i = 1; i<=x; i++){
        if(x % i == 0){
            sum += i;
        }
        
    }

    return sum;

}

int main()
{
    /*
    Problem: Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.
    */

   /*

    Brute Force Solution Below:
   
   */

    int n = 50;
    // initialze divisor array
    vector<int> div;

    // initialize F(i) array
    vector<int> fi;

    // find divisor, add it to array
    for(int i = 1; i<= n; i++){
        int divisor = i;
        div.push_back(divisor);
    }
    
    // for each divisor in array, sum it up add result to F(i) array
    for(int i = 0; i<div.size(); i++){
        int divisor = div[i];
        int sum = fiv(divisor);
        fi.push_back(sum);
    }

    // sum up F(i) array
    long long res = 0;
    for(int i = 0; i < fi.size(); i++){
        res+= fi[i];
    }

    // return the result
    cout << res << endl;


    /*
    Optimized solution below:
    */

    long long re2 = 0;
    for(int i = 1; i<=n; i++){
        re2+= (n/i)*i;
    }

    return re2;





 
    return 0;
}