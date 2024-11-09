// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 3/5/23
// Alton77@csu.fullerton.edu 
// Alton7759
//
// Lab 6-3 (extra challenge)
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "player.h"

#include <iostream>

Player::Player() {
  xpos_ = 0;
  ypos_ = 0;
  name_ = "Ash";
  health_ = 10;
  strength_ = 5;
  defense_ = 2;
}
Player::Player(const std::string &name, const int &Hp, const int &Str,
               const int &Def, const int &x, const int &y) {
  xpos_ = x;
  ypos_ = y;
  name_ = name;
  health_ = Hp;
  strength_ = Str;
  defense_ = Def;
}
void Player::PlayerMove() {
  xpos_ = xpos_ + 1;
  ypos_ = ypos_ + 1;
}
void Player::DisplayStat() {
  std::cout << "Player: " << name_ << "\n";
  std::cout << "Health: " << health_ << "\n";
  std::cout << "Strength: " << strength_ << "\n";
  std::cout << "Defense: " << defense_ << "\n";
  std::cout << "At position: (" << xpos_ << ", " << ypos_ << ")\n";
}
void Player::TakeDamage(int DamgeTaken) {
  health_ -= DamgeTaken;
  std::cout << name_ << " took " << DamgeTaken << " damage\n";
  if (IsPlayerDead()) {
    std::cout << name_ << " is dead\n";
    health_ = 0;
  }
}
bool Player::IsPlayerDead() {
  if (health_ <= 0) {
    return true;
  }
  return false;
}
int Player::GetXpos() {
  return xpos_;
}
void Player::SetXpos(const int &x) {
  xpos_ = x;
}
int Player::GetYpos() {
  return ypos_;
}
void Player::SetYpos(const int &y) {
  ypos_ = y;
}
int Player::GetStrength() {
  return strength_;
}
void Player::SetStrength(const int &Str) {
  strength_ = Str;
}
int Player::GetDefense() {
  return defense_;
}
void Player::SetDefense(const int &Def) {
  defense_ = Def;
}
int Player::GetHealth() {
  return health_;
}
void Player::SetHealth(const int &Hp) {
  health_ = Hp;
}
std::string Player::GetName() {
  return name_;
}
void Player::SetName(const std::string &name) {
  name_ = name;
}
