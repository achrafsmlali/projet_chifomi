#ifndef GAME_HPP_
#define GAME_HPP_
#include <string>
class Game{
public:
  std::string _last_result;
  std::string _last_Ai_Move;

  void play(std::string move);
  std::string get_Last_Result();
  std::string get_AI_Move();
  
};

std::string compte_Result(std::string move_IA,std::string move_user);

#endif
