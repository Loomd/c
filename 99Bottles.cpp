// DECREMENT PRACTICE.
#include <iostream>
using namespace std;

int main() {
// Since we want to have a final-verse I used the postfix decrement
// so that the value is noted prior to it being changed.
  for (int i = 99; i > 0; i--)
  {
    cout << i << " bottles of beer on the wall.\n";
    cout << i << " bottles of beer.\n";
    cout << "Take one down and pass it around.\n";
    cout << i - 1 << " bottles of beer on the wall.\n\n";
  }
    cout << "No more bottles of beer on the wall.\n";
    cout << "No more bottles of beer.\n";
    cout << "We've taken them down and passed them around.\n";
    cout << "now we're drunk and passed out!\n";
}

/* if you want to decrement but not have the ending verse
you can use the prefix decrement so that the value is changed immediately.
for (int b = 99; b > 0; --b)
{
  cout << b << " bottles of beer on the wall.\n";
  cout << "Take one down pass it around.\n";
  cout << b -1 << " bottles of beer on the wall./\n";
}
*/