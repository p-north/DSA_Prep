#include<bits/stdc++.h>
using namespace std;


//Brute force approach
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // only the filled cells need to be validated

        unordered_map<char, int> row_map;
        unordered_map<char, int> col_map;

        //iterate through each row, adding frequency. and checking for frequency
        for(auto &row:board){
            for(auto &c: row){
                
                if(c != '.' && isdigit(c)){
                    // if c already there, means duplicate, return false
                    if(row_map.find(c) != row_map.end() || (c-'0')>9 || (c-'0')<1){
                        return false;
                    }
                    row_map[c]++;
                }
            }
            // clear the rowmap for next row
            row_map.clear();

        }
        // iterate through each columns, look for duplicates
        for(int i = 0; i<board[0].size(); i++){
            for(int j = 0; j<board.size(); j++){
                char c = board[j][i];
                if(c!='.' && isdigit(c)){
                    // check for duplicate
                    if(col_map.find(c) != col_map.end()|| (c-'0')>9 || (c-'0')<1){
                        return false;
                    }
                    // add to map if note there
                    col_map[c]++;
                }
            }
            // clear map for next column
            col_map.clear();
        }

        // check for the 3x3 subboxes
        // new hashmap
        unordered_map<char, int> sub3;

        
        for(int i = 0; i<board.size(); i++){
            int start_row = 3*(i/3);
            int start_col = 3*(i%3);

            for(int row = start_row; row<start_row+3; row++){
                for(int col = start_col; col<start_col+3; col++){
                    char c = board[row][col];
                    if(c!='.' && isdigit(c)){
                        if(sub3.find(c) != sub3.end()){
                            return false;
                        }
                        sub3[c]++;
                    }
                }
            }
            // clear the map for next
            sub3.clear();


        }


        // all cases valid, return true
        return true;












        
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules: Each row must contain the digits 1-9 without repetition. Each column must contain the digits 1-9 without repetition. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
        Link: https://leetcode.com/problems/valid-sudoku/description/
    
    */
 
    return 0;
}