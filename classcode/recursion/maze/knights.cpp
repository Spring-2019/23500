#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <iomanip>
std::string maze[26];
char me='Z';
char visited='.';
char wall=' ';
char goal='$';

void initialize_board(int board[9][9]){
  int i,j;
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      board[i][j]=0;
    }
  }
  for (i = 0 ; i < 9; i++) {
    board[i][0]=-1;
    board[i][1]=-1;
    board[i][7]=-1;
    board[i][8]=-1;
    board[0][i]=-1;
    board[1][i]=-1;
    board[7][i]=-1;
    board[8][i]=-1;
  }
}

void print_board(int board[9][9]){

  std::cout << "[0;0H\n";
  int i,j;
  for (i=0;i<9;i++){
    std::cout << ":";
    for (j = 0; j < 9; j++) {
      std::cout << std::setw(2) <<  board[i][j] << ":";
    }
    std::cout << "\n";

  }
  std::cout << "\n";
}

void solve(int board[9][9], int row, int col, int level, int &solved){
  print_board(board);
  usleep(10000);

  if (level==26){
    solved = 1;
    print_board(board);
    return;
  }
  if (board[row][col]!=0){
    return;
  }
  board[row][col]=level;
  if (!solved) solve(board,row+1,col+2,level+1,solved);
  if (!solved) solve(board,row-1,col+2,level+1,solved);
  if (!solved) solve(board,row+1,col-2,level+1,solved);
  if (!solved) solve(board,row-1,col-2,level+1,solved);
  if (!solved) solve(board,row+2,col+1,level+1,solved);
  if (!solved) solve(board,row+2,col-1,level+1,solved);
  if (!solved) solve(board,row-2,col+1,level+1,solved);
  if (!solved) solve(board,row-2,col-1,level+1,solved);
  board[row][col]=0;
  
  

}

int main()
{
  int solved=0;
  int board[9][9];
  initialize_board(board);
  print_board(board);
  solve(board,2,2,1,solved);
    
  return 0;
}

