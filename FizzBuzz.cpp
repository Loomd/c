// Aaron Hunter
// Fizz Buzz - (from codecademy) is a classic developer interview question that is asked or referred to so often for so long, it is almost a cliché!
// Though this challenge will appear very simplistic to those with some coding experience, it is designed to weed out 99.5% programming job candidates
// who cannot creatively use their coding knowledge to solve simple problems.
#include <iostream>
#include <string>
using namespace std;

int main() {

int counter = 1;
string fizz = "\nFizz";
string buzz = "\nBuzz";
string fizzBuzz = "\nFizzBuzz";

while(counter != 100){
  if (counter % 3 == 0 && counter % 5 == 0){
    cout << fizzBuzz;
  } else if (counter % 5 == 0){
    cout << buzz;
  } else if (counter % 3 == 0){
    cout << fizz;
  } else {
    cout << "\n" << counter;
  }
  counter++;
}
return 0;
}
