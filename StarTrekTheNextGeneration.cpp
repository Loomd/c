#include <iostream>
#include <string>
using namespace std;

void clearScreen() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

bool solvePuzzle() {
    string puzzle = "1000101";
    int answer;
    int attempts = 0;

    while (attempts < 3) {
        cout << "\nSolve the puzzle to continue: " << puzzle << ": ";
        if(!(cin >> answer)){
            cout << "ER..RROorORO..DO..BEtTeeERR\n";
            cout << "Solve the puzzle to contiue: ";
            cin.clear();
            cin.ignore(100, '\n');
            continue;
        }
        if (answer == 69) {
            cout << "You solved the puzzle. Warp core repair in progress...\n";
            break;
        }
        else {
            attempts++;
            cout << "Incorrect. You have " << 3 - attempts << " attempts left.\n";
        }
    }
    if (attempts == 3) {
        cout << "You failed to solve the puzzle. The panel explodes.\n";
        return false;
    }
    return true;
}

// Program starts here.
int main() {

// Variables.
char tryAgain;
bool puzzle = false;
int yesOrNo; // Enter the game.
int choice1, subChoice1; // First menu, choice 1. Choice 1's sub-menu.
int choice2, subChoice2; // First menu, Choice 2. Choice 2's sub-menu.
int choice3, subChoice3; // First menu, Choice 3. Choice 3's sub-menu.

// Introduction banner.
cout << "\t\t\t\t*  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *\n";
cout << "\t\t\t\t  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *\n";
cout << "\t\t\t\t   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   *\n";
cout << "\t\t\t\t*  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *\n";
cout << "\t\t\t\t  *   * *  *   * *  *   * *   * *  *   STAR KEK   * *  *   * *  *   * *  *   * *  *   \n";
cout << "\t\t\t\t   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   *\n";
cout << "\t\t\t\t*  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *\n";
cout << "\t\t\t\t  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *\n";
cout << "\t\t\t\t   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   *\n";

// Introduction prompt.
cout << "Welcome to Star Kek: The Next Generation\n";
cout << "In this adventure, you will take on the role of a crew member aboard the USS Enterprise, a Federation starship on a mission of exploration and diplomacy.\n";
cout << "As you sit at your station on the bridge, surrounded by the hum of the ship's systems and the chatter of your fellow crewmates, you suddenly jolt to consciousness.\n";
cout << "The room is in chaos - alarms blare, sparks fly from damaged consoles, and smoke fills the air.\n";
cout << "Looking around, you see that the Enterprise has been attacked by a group of Ferengi raiders, their small but powerful vessels having penetrated the Enterprise's shields.\n";
cout << "As you scramble to regain your bearings, you know that it's up to you and your crewmates to save the ship, fend off the Ferengi, and prevent any further damage.\n";
cout << "Will you rise to the occasion and become a hero of the Federation? The fate of the Enterprise is in your hands!\n\n";

// Enter game yesOrNo (1 or 0).
cout << "Welcome aboard the USS Enterprise. Do you wish to play 1/0: ";

    // Validate input.
    while(!(cin >> yesOrNo ) || yesOrNo < 0 || yesOrNo > 1){
        cout << "MALFUNCTION......BEEEEEEEPPPPP.....TRY AGAIN\n";
        cout << "Do you wish to play 1/0: ";
        cin.clear();
        cin.ignore(1000, '\n');
        continue;
    }

    // Player has entered the game. Starting prompt.
    if(yesOrNo == 1){
        cout << "\n\nYou quickly assess the situation and see that a small detachment of Ferengi raiders have beamed aboard the Enterprise and are wreaking havoc throughout the ship.\n";
        cout << "Your captain becomes injured and your first officer is struggling to maintain control of the situation.\n";
        cout << "It's now up to you to take charge and lead the effort to repel the invaders and save the ship.\n\n";

        // First menu.
        cout << "What will you do?\n";
        cout << "1. Engage the Ferengi in combat.\n";
        cout << "2. Attempt to negotiate a ceasefire.\n";
        cout << "3. Order a retreat to regroup and plan a counterattack.\n";

            // Validate input from first menu.
            while(!(cin >> choice1) || choice1 < 1 || choice1 > 3){
                cout << "Invalid input. Please enter a number between 1 and 3.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

                // Switch case statement for menu. Starting with case '1' (choice 1).
                switch (choice1) {
                case 1:
                    cout << "\n\nYou grab a phaser from your station and lead a team of security officers to engage the Ferengi in hand-to-hand combat.\n";
                    cout << "The battle is fierce, but your training and quick reflexes prove to be an asset in the fight.\n";
                    cout << "After a long struggle, you emerge victorious and the Ferengi retreat from the ship.\n";
                    cout << "As you survey the damage to the Enterprise, you realize that there is a critical problem in the warp core. If you don't fix it soon, the ship will explode!\n\n";

                    // First menu, choice 1 sub-menu.
                    cout << "What will you do?\n";
                    cout << "1. Try to fix the warp core yourself.\n";
                    cout << "2. Find an engineer to help you fix the warp core.\n";

                        // Validate selection.
                        while(!(cin >> subChoice1) || subChoice1 < 1 || subChoice1 > 2){
                            cout << "Invalid input. Please enter 1 or 2.\n";
                            cin.clear();
                            cin.ignore(1000, '\n');
                            continue;
                        }

                            // Choice 1's, sub-menu story.
                            if(subChoice1 == 1){
                                while(true){
                                    cout << "\n\nYou rush to the warp core and begin working frantically to fix the problem.\n";
                                    cout << "Your hands move quickly over the controls as you try to stabilize the reactor.\n";
                                    puzzle = solvePuzzle();
                                        if (puzzle){
                                            cout << "You successfully fixed the warp core.\n";
                                            break;
                                        }
                                        else {
                                            cout << "Just when you think you've got it under control, a panel explodes in your face!\n";
                                            cout << "You wake up in sickbay several hours later with a bandage wrapped around your head.\n";
                                            cout << "The captain informs you that the warp core was unsuccessfully stabilized.\n";
                                            cout << "\n\nDo you want to try again? (Y/N): ";
                                            cin >> tryAgain;
                                                if (tryAgain == 'N' || tryAgain == 'n') {
                                                    break; // Exit the loop and continue with the main story
                                                }
                                        }
                                }

                            }else{
                                cout << "\n\nYou attempt to negotiate a peaceful resolution with the Ferengi, but they are not interested in talking.\n";
                                cout << "They open fire on your team and you are forced to retreat to the Enterprise.\n";
                                cout << "The Ferengi continue their attack on the outpost and it is destroyed. Your captain orders you to pursue the Ferengi and bring them to justice.\n";
                                cout << "You engage the Ferengi in a high-speed pursuit through an asteroid field, dodging debris and firing phasers.\n";
                                cout << "Finally, you manage to disable their ship and take them into custody.\n";
                                // Continue the story here...
                            }
                break;

                // First menu, case '2' (choice 2).
                case 2:
                    cout << "\n\nYou attempt to hail the Ferengi and negotiate a ceasefire. However, the Ferengi are not interested in diplomacy and respond with a barrage of weapons fire.\n";
                    cout << "You quickly realize that negotiations are not an option and must resort to other means to save the ship.\n";
                    cout << "Your first officer suggests using a deflector pulse to disable the Ferengi ship's weapons.\n\n";

                    // Case '2'/choice 2's menu.
                    cout << "What do you do?\n";
                    cout << "1. Order the deflector pulse to be fired immediately.\n";
                    cout << "2. Try to find another way to disable the Ferengi weapons.\n";

                        // Validate user input.
                        while(!(cin >> choice2) || choice2 < 1 || choice2 > 2){
                            cout << "Invalid input. Please enter a number between 1 and 2.\n";
                            cin.clear();
                            cin.ignore(1000, '\n');
                            continue;
                        }

                            // Branch choice 2.
                            if (choice2 == 1) {
                                cout << "\n\nYou order the deflector pulse to be fired immediately. The pulse hits the Ferengi ship and their weapons are disabled.\n";
                                cout << "With the Ferengi no longer a threat, you are able to tend to the injured crew members and begin repairs on the ship.\n";
                                cout << "However, as you work, you begin to realize that the Ferengi attack may have been a diversion for something else.\n\n";

                                // choice 2's sub-menu.
                                cout << "What do you do?\n";
                                cout << "1. Investigate the ship's systems to determine if there are any other threats.\n";
                                cout << "2. Contact Starfleet Command for assistance.\n";
                                cout << "3. Continue with repairs and hope for the best.\n";

                                    // Validate choice 2's sub-menu.
                                    while (!(cin >> subChoice2 ) || subChoice2 < 1 || subChoice2 > 3) {
                                        cout << "Invalid input. Please enter a number between 1 and 3.\n";
                                        cin.clear();
                                        cin.ignore(1000, '\n');
                                        continue;
                                    }
                            }

                                        if (subChoice2 == 1) {
                                            cout << "\n\nYou order a thorough scan of the ship's systems and discover that the Ferengi had planted a virus that could cause the ship's engines to overload.\n";
                                            cout << "You quickly work to eradicate the virus and prevent the ship from being destroyed. Your quick thinking saves the ship and all of its crew.\n";
                                            // Continue the story here...
                                        }
                                        else if (subChoice2 == 2) {
                                            cout << "\n\nYou contact Starfleet Command and request assistance. They respond quickly and send a fleet of ships to help protect the Enterprise and capture the Ferengi raiders.\n";
                                            cout << "With the additional support, you are able to repel the invaders and save the ship.\n";
                                            // Continue the story here...
                                        }
                                        else {
                                            cout << "\n\nYou continue with repairs, but soon realize that the Ferengi attack was just the beginning of a larger invasion force.\n";
                                            cout << "Without the proper defenses in place, the Enterprise falls quickly to the invaders and all is lost.\n";
                                            // Continue the story here...
                                        }
        }
    }
    cout << "\nLive long and prosper, Starfleet officer. Until we meet again.";
}