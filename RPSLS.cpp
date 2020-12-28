/*
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
Rock crushes Scissors.
*/

#include <iostream>
#include <cstdlib>

int main() {
srand (time(NULL));
int computer = rand() % 5 + 1;
int user = 0;

  // Live long and prosper
std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";
 
std::cout << "1) Rock\n";
std::cout << "2) Paper\n";
std::cout << "3) Scissors \n";
std::cout << "4) Lizard \n";
std::cout << "5) Spock\n";
 
std::cout << "shoot! ";

std::cin >> user;

  if (user == 1)
    std::cout << "You Choose: Rock\n";
  else if (user == 2)
    std::cout << "You Choose: Paper\n";
  else if (user == 3)
    std::cout << "You Choose: Scissors\n";
  else if(user ==4)
    std::cout<< "You Choose: Lizard \n";
  else 

    std::cout << "You Choose: Spock \n\n";

  if (computer == 1)
    std::cout << "Cpu Choose: Rock\n";
  else if (computer == 2)
    std::cout << "Cpu Choose: Paper\n";
  else if (computer == 3)
    std::cout << "Cpu Choose: Scissors\n";
  else if(computer == 4)
    std::cout<< "Cpu Choose: Lizard \n";
  else 
    std::cout << "Cpu Choose: Spock \n\n";

if (user == computer) {
    std::cout << "It's a tie!\n";
  }

else if (user == 1) {

  if (computer == 2) {
  std::cout << "you lost! booooo!\n";
  }
  if (computer == 3) {
  std::cout << "you won! woohoo!\n";
  }
  if (computer == 4){
  std::cout << "you won! woohoo!\n";  
  }
  if (computer == 5){
  std::cout << "you lost! booooo!\n";  
  }
}

else if (user == 2) {
  if (computer == 1) {
  std::cout << "you won! woohoo!\n";
  }
  if (computer == 3) {
  std::cout << "you lost! booooo!\n";
  }
  if (computer == 4){
  std::cout << "you lost! booooo!\n";  
  }
  if (computer == 5){
  std::cout << "you won! woohoo!\n";
  }
}

else if (user == 3) {
  if (computer == 1) {
  std::cout << "you lost! boooo!\n";
  }
  if (computer == 2) {
  std::cout << "you woon! woohoo!\n";
  }
  if (computer == 4){
  std::cout << "you won! woohoo!\n";  
  }
  if (computer == 5){
  std::cout << "you lost! booooo!\n";
  }
}
else if (user == 4) {
  if (computer == 1) {
  std::cout << "you lost! boooo!\n";
  }
  if (computer == 2) {
  std::cout << "you lost! booooo!\n";
  }
  if (computer == 3){
  std::cout << "you won! woohoo!\n";  
  }
  if (computer == 5){
  std::cout << "you won! woohoo!\n";
  }
}
else{
  if (computer == 1) {
  std::cout << "you won! woohoo!\n";
  }
  if (computer == 2) {
  std::cout << "you lost! booooo!\n";
  }
  if (computer == 3){
  std::cout << "you won! woohoo!\n";  
  }
  if (computer == 4){
  std::cout << "you lost! boooo!\n";
  }
}
return 0;
}
