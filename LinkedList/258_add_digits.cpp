#include<iostream>
using namespace std;



// Optimal recursive solution
 int addDigits(int num) {
        // no adding digits until a single digit
        if(num < 10){
            return num;
        }

        // get the last digit ofr number
        int last = num % 10; 
        // sum up with last digit
        int sum = last + addDigits(num/10);

        // if sum is still not single digits, do the process again with the smaller number
        if(sum >= 10){
          return addDigits(sum);
        }
        else{
            return sum;
        }

}

int main()
{

    /*
        Level: Easy
        Problem: https://leetcode.com/problems/add-digits/description/
        Link: https://leetcode.com/problems/add-digits/description/

    */
 
    return 0;
}