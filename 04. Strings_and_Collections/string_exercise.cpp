//exercise: string_demo

#include <iostream>
#include <string>

using namespace std;

int main() {
  string first_word;
  string second_word;
  cout << "Enter your first word: "<< endl;
  getline(cin, first_word);
  cout << "Enter your second word: "<< endl;
  getline(cin, second_word);

  int f = first_word.length();
  int s = second_word.length();

  if (f > s) {
   cout << "The first word \"" + first_word+ "\"" " is longer than the second word" << endl;
  }

  if (s > f) {
   cout << "The second word \"" + second_word+ "\"" "is longer than the first word" << endl;
  }

  if (s == f) {
   cout << "The first word \"" +  first_word+ "\"" " is equal in length to the second word \"" + second_word + "\"" << endl;

  }

  return 0;

}


