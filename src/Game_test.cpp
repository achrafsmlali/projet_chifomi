#include <CppUTest/CommandLineTestRunner.h>
#include "Game.hpp"
#include <string>

TEST_GROUP(GroupChifoumi) { };

TEST(GroupChifoumi, Chifomi_test1) 
{ 
  Game g;
  std::string move_user="rock";
  g.play(move_user);
  std::string move_IA=g.get_AI_Move();
  if(move_IA=="rock"){
    CHECK_EQUAL(compte_Result( move_IA,move_user),"equality");}
  else if(move_IA=="paper"){
    CHECK_EQUAL(compte_Result( move_IA,move_user),"you lose");}
  else {
    CHECK_EQUAL(compte_Result( move_IA,move_user),"you win");}
}
