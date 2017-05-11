#include <iostream>
#include <string>
#include <glog/logging.h>
#include "Game.hpp"

int main(){
google::InitGoogleLogging("log_chifoumi");
 google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
 std::cout<<"**************Chifoumi*****************"<<std::endl;

 bool test =true;
 std::string user_move;
 Game game;
 while(test==true){
  std::cout<< "move (rock, paper, scissors, quit):"<<std::endl;
  std::cin>>user_move;
  if (user_move=="quit")break;
  if (user_move!="rock" and user_move!="paper" and user_move!="scissors")continue;
  game.play(user_move);
  std::cout<<compte_Result(game.get_AI_Move(), game.get_Last_Result())<<std::endl;
 }

 
   
   LOG(INFO)  << "test222*******";

  return 0;   
}
