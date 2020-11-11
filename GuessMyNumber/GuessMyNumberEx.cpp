#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
  int tries = 0;
  int guess = 0;
  int secretNumber;
  srand(static_cast<unsigned int>(time(0)));
  cout << "Enter a secret number (1 - 100) :";
  cin >> secretNumber;
  cout << "\n\tWelcome to Guess My Number (Computer Edition)\n\n";
  do{
    guess = rand() % 100 + 1;
    cout << "Computer guess :" << guess << endl;
    ++tries;
    if(guess > secretNumber){
      cout << "Too high!\n\n";
    }
    else if(guess < secretNumber){
      cout << "Too low!\n\n";
    }
    else{
      cout << "\nThat's it! You got it in " << tries << " guesses!\n";
    }
  }
  while(guess != secretNumber);
  return 0;
}
