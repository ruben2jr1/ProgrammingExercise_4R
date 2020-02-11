
// Creates an Empty 3x3 Matrix of Characters either ' ','X', or 'O'.
char CreateBoard()
{
  char Board[3][3];
  // Populate with empty characters:
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      Board[i][j] = ' ';
    }
  }
  return Board;
}
