#include <iostream>
using namespace std;
//BattleShipGame
bool gameOver=false;
const int boardWidth =10;
const int boardLength =9;
//Battleships
const int carrierLength= 5;
const int battleshipLength= 4;
const int cruiserLength= 3;
const int submarineLength= 3;
const int destroyerLength= 2;
//AI placed ships(X,Y)//
int shipXAi[4];
int shipYAi[4];

void Setup(){
  srand(time(NULL));
  for (int i = 0; i < 5; i++) {
    shipXAi[i]=rand()%9;
  }
  for (int i = 0; i < 5; i++) {
    shipYAi[i]=rand()%9;
  }
}
void Draw(){
  int x=0;
  char y = 65;

  cout<<"| |";
  for (int i = 0; i < boardWidth; i++) {
    cout<<x<<"|";
    x++;
  }
  cout<<endl;
  //Nested for loop for grid generation
  for (int i = 0; i <boardLength; i++) {
    cout<<"| |"<<y<<"|";
    //If operators for ship generation
    for (int j = 0; j < boardWidth-1; j++) {

        if(shipXAi[0] == i && shipYAi[0] == j)
        {
          cout<<"O|";
            }
        else if (shipXAi[1] == i && shipYAi[1] == j) {
          cout<<"O|";
        }
      else  if (shipXAi[2] == i && shipYAi[2] == j) {
          cout<<"O|";
        }
      else  if (shipXAi[3] == i && shipYAi[3] == j) {
          cout<<"O|";
        }
      else  if (shipXAi[4] == i && shipYAi[4] == j) {
          cout<<"O|";
        }
      else{
            cout<<" |";
          }

        }
        cout<<endl;
        y++;
      }
for (size_t i = 0; i < 5; i++) {
cout<<"("<<shipXAi[i]+1<<","<<shipYAi[i]+1<<")"<<endl;
}
      }



void Logic()
{

}

void Input(){

}


int main() {

  Setup();
  Draw();
  Logic();
  Input();

  return 0;
}
