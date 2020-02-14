#include <iostream>

// Creates an Empty 3x3 Matrix of Characters either ' ','X', or 'O'.
void CreateBoard(char Board[3][3])
{
  // Populate with empty characters:
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      Board[i][j] = '_';
    }
  }
}

//Takes in a refernce the the board, the location of the current move, and the letter to place there.
void PlaceMarker(char (&Board)[3][3], int arr[], char choice){
  Board[arr[0]][arr[1]]=choice;

}


// Display Board Function:
void DisplayBoard(char Board[3][3])
{
  for(int i = 0; i <= 3-1; i++)
  {
    std::cout << Board[i][0] << " " << Board[i][1] << " " << Board[i][2] << std::endl;
  }
}

// GetPlayerChoice Implementation:
void playerChoice(int playerChoice[2])
{
  int X = 0;
  int Y = 0;
  std::cout << " - Input Row Value: ";
  std::cin >> X;
  X = X - 1;
  playerChoice[0] = X;
  std::cout << " - Input Col Value: ";
  std::cin >> Y;
  Y = Y - 1;
  playerChoice[1] = Y;
  std::cout << std::endl;
}

int main()
{
  char Board[3][3];
  CreateBoard(Board);
  int PC[2]; //This array stores the row PC[0] and the column PC[1]
  char Player ='X';
  for(int i=0; i<9; i++){
    DisplayBoard(Board);
    std::cout<<"It is player "<<Player<<"'s turn."<<std::endl;
    playerChoice(PC);
    PlaceMarker(Board,PC,Player);
    if(Player=='X'){
      Player='O';
    }
    else{
      Player='X';
    }
  }
  DisplayBoard(Board);
  return 0;
}
