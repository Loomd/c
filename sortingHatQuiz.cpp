#include <iostream>
#include <string>
using namespace std;

void myName() {
    cout << "Created_By_Loomd";
}

int main() {

    bool repeat = false;
    do {

        int gryffindor = 0;
        int hufflepuff = 0;
        int ravenclaw = 0;
        int slytherin = 0;
        int max = 0;
        int answer1, answer2, answer3, answer4;
        string house;

        cout << "=====================\n";
        cout << "The Sorting Hat Quiz!\n";
        cout << "=====================\n\n";

        cout << "Q1) When I'm dead, I want people to remember me as: \n\n";
        cout << "1) The Good\n";
        cout << "2) The Great\n";
        cout << "3) The Wise\n";
        cout << "4) The Bold\n\n";
        cin >> answer1;

        if (answer1 == 1)
            hufflepuff++;
        else if (answer1 == 2)
            slytherin++;
        else if (answer1 == 3)
            ravenclaw++;
        else if (answer1 == 4)
            gryffindor++;
        else
            cout << "INVALID_INPUT\n";

        cout << "\nQ2) Dawn or Dusk?\n\n";
        cout << "1) Dawn\n";
        cout << "2) Dusk\n\n";
        cin >> answer2;

        if (answer2 == 1) {
            gryffindor++;
            ravenclaw++;
        }
        else if (answer2 == 2) {
            hufflepuff++;
            slytherin++;
        }
        else
            cout << "INVALID_INPUT";

        printf("\nQ3) Which kind of instrument most pleases your ear?\n\n1) The violin\n2) The trumpet\n3) The piano\n4) The drum\n\n");
        cin >> answer3;

        if (answer3 == 1)
            slytherin++;
        else if (answer3 == 2)
            hufflepuff++;
        else if (answer3 == 3)
            ravenclaw++;
        else if (answer3 == 4)
            gryffindor++;
        else
            cout << "INVALID_INPUT";

        printf("\nQ4) Which road tempts you most?\n\n1) The wide, sunny grassy lane\n2) The narrow, dark, latern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n\n");
        cin >> answer4;

        if (answer4 == 1)
            hufflepuff++;
        else if (answer4 == 2)
            slytherin++;
        else if (answer4 == 3)
            gryffindor++;
        else if (answer4 == 4)
            ravenclaw++;
        else
            cout << "INVALID_INPUT";

        if (gryffindor > max) {
            max = gryffindor;
            house = "\nGryffindor";
        }

        if (hufflepuff > max) {
            max = hufflepuff;
            house = "\nhufflepuff";
        }

        if (ravenclaw > max) {
            max = ravenclaw;
            house = "\nravenclaw";
        }

        if (slytherin > max) {
            max = slytherin;
            house = "\nslytherin";
        }

        cout << house << "!\n\n";
        myName();

        cout << "\n\nEnter 1 to play again or enter 0 to exit: ";
        cin >> repeat;
        cin.ignore();
    } while (repeat);

    return 0;
}
