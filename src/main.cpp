#include <iostream>
#include <string>
#include <glog/logging.h>
#include "Game.hpp"

int main(int argc, char ** argv){
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

  LOG(INFO) <<argv[1]<<";"<<compte_Result(game.get_AI_Move(), game.get_Last_Result())<<";"<<game.get_Last_Result()<<";"<<game.get_AI_Move()<<std::endl;
  
 }

 
   
  

  return 0;   
}
