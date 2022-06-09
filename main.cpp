#include "nqs.h"

int main(int argc, char* argv[]) {

  // Read board size from user

  int n = 0;

  cout << "Enter the value of N" << "\n";

  cin >> n;



  // Dynamically allocate array of arrays for chess board

  Square** board = new Square*[n];

  for (int i = 0; i < n; i++) {

    board[i] = new Square[n];

  }



  // Print out the board if solvable, or an error message

  if (CanSolveWithBackTrack(board, n)) {

    cout << "This combination CAN place the queens!" << "\n";

    PrintChessBoard(board, n);

  } else {

    cout << "This combination CAN'T place the queens." << "\n";

  }



  // Free chess board arrays...MUST use array form "delete[]"!

  for (int i = 0; i < n; i++) {

    delete[] board[i];

  }

  delete[] board;



  return 0;

}
