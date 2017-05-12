#ifndef GAME_HPP_
#define GAME_HPP_
#include <string>

  /**  Game Game.hpp 
    la classe Game era utilier pour manipuler le jeu.
    pour le premier cous il faut utiliser la methode play quui initialise les attribus avant d'utiliser les deux autre methode sui permmet de renvoyer ce attribus 



 */
class Game{
private:
  ///atribue qui contient le dernier choix de l'utilisateur
  std::string _last_result;
  ///atribue qui contient le dernier choix de l'ordi
  std::string _last_Ai_Move;
public:
  ///permet d'initialiser les attribus _last_result avec le choix du user et  _last_Ai_Move avec un coix aleatoire
  void play(std::string move);
  /// utilier pour renvoyer le dernier choix du user
  std::string get_Last_Result();
  /// utilier pour renvoyer le dernier choix de l'ordi
  std::string get_AI_Move();
  
};

/// determine le gagnant dapres les  de choix passer en paramtre(choix IA en premier ensuite choix user )
std::string compte_Result(std::string move_IA,std::string move_user);

#endif
