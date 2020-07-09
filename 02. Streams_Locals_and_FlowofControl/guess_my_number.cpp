#include <iostream>
using namespace std;

int main() {
  int input;
  int answer= 7;
  bool keepgoing= true;
  
  while (keepgoing) {
  cout << "Please guess the number: ";
  cin >> input;
  if (input > answer) {
    cout << "Your input " << input << " is higher than the answer" << endl;
  }

  if (input < answer) {
    cout << "Your input " << input << " is lower than the answer" << endl;
  }

  if(input == answer) {
    cout << "Congratulations you guessed " << answer << " which is the right answer!";
    keepgoing= false;
  }
  }
}