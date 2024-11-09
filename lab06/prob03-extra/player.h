// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 3/5/23
// Alton77@csu.fullerton.edu
// Alton7759
//
// Lab 6-3 (extra challenge)
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

class Player {
 public:
  Player();
  Player(const std::string &name, const int &Hp, const int &Str, const int &Def,
         const int &x, const int &y);
  void PlayerMove();
  void DisplayStat();
  void TakeDamage(int DmageTaken);
  bool IsPlayerDead();
  int GetXpos();
  void SetXpos(const int &x);
  int GetYpos();
  void SetYpos(const int &y);
  int GetStrength();
  void SetStrength(const int &Str);
  int GetDefense();
  void SetDefense(const int &Def);
  int GetHealth();
  void SetHealth(const int &Hp);
  std::string GetName();
  void SetName(const std::string &name);

 private:
  int xpos_ = 0;
  int ypos_ = 0;
  std::string name_{""};
  int health_ = 0;
  int strength_ = 0;
  int defense_ = 0;
};