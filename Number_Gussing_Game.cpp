//
// Created by Saifaldin Elabyad on 22/08/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
  int correct_number = rand();
  while (true) {
    cout << "Enter your guess: ";
    int guess;
    cin >> guess;
    if (guess == correct_number){
      cout << "You guessed the correct number ( " << correct_number << " )" << endl;
      break;
    } else if (guess > correct_number) {
      cout << "Your guess is greater than the correct number. Try Again" << endl;
    } else if (guess < correct_number) {
      cout << "Your guess is less than the correct number. Try Again" << endl;
    }
  }
  return 0;
}
