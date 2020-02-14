#include <iostream>

// Creates an Empty 3x3 Matrix of Characters either ' ','X', or 'O'.
void CreateBoard(char Board[3][3])
{
  // Populate with empty characters:
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      Board[i][j] = ' ';
    }
  }
}

// Display Board Function:
void DisplayBoard(char Board[3][3])
{
  for(int i = 0; i <= 3-1; i++)
  {
    std::cout << Board[i][0] << "-" << Board[i][1] << "-" << Board[i][2] << std::endl;
}

int main()
{
  char Board[3][3];
  CreateBoard(Board);
  DisplayBoard(Board);
  return 0;
}
