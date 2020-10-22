#ifndef Sudoku_H
#define Sudoku_H

class Sudoku {

public:
  Sudoku(int puzzle[9][9]);
  ~Sudoku();

  void solve();  // solves the puzzle
  void print();  // prints the puzzle
  void verify(); // verifies the puzzle is valid
  struct next_pos {
    int row;
    int col;
    next_pos(int r, int c) {
      if (c < 8) {
        row = r;
        col = c + 1;
      } else {
        row = r + 1;
        col = 0;
      }
    }
  };

private:
  bool isValid(int row, int col);
  bool solveHelper(int row, int col);
  int board[9][9];

  // add extra helper functions here
};

#endif