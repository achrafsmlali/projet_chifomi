#include "Game.hpp"

void Game::play(std::string move){
  _last_Ai_Move="rock";//IA_rondom
  _last_result=move;
}

std::string Game::get_AI_Move(){
  return _last_Ai_Move;
}

std::string Game::get_Last_Result(){
  return _last_result;
}

std::string compte_Result(std::string move_IA,std::string move_user){
  if(
     (move_IA=="paper" and  move_user=="rock")
     or(move_IA=="scissors" and  move_user=="paper")
     or(move_IA=="rock" and  move_user=="scissors")
     )return "ordi gagne";
  else{
    if(move_IA== move_user)return "egalite";
    else{
      return "tu a gagne";
    }
  }

}
