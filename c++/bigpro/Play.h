#ifndef PLAY_H
#define	PLAY_H
#include "Arena.h"

class Play : public Arena{
public:
int randomNumber();
int getDistrubtionX();
int getDistrubtionY();
void setDistrubtionX(int a);
void setDistrubtionY(int a);
void setDistrubion();
void setPlayerName(std::string player_odd, std::string player_even);
std::string getPlayerNameEven();
std::string getPlayerNameOdd();
void setDefaultScore();
void setScore(int val, int h);
int totalScoreEvenPlayer();
int getScore(int x);
int totalScoreOddPlayer();
void writeToScoreFile();
void updateLeaderBoard(std::string a);
void writeToPlayerNameFile(std::string p1, std::string p2);
void deletLeaderBoard();
void readFileScore();

void sortingArrayLeaderBoard();
void sortingArrayLeaderBoardOnly();
void readFileLeaderBoard();

void readPlayerName();
int getTurn();
Play();
~Play();



private:
  std::string p1,p2;
  int distrubtionx;
  int distrubtiony;

  //int score1[7] ; // default is -1 to detect saving game

  int* score; // array [7]
  int* setArrayScore(); // create array and  set value to -1

};
#endif
