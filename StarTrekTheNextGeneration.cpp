#include <iostream>
using namespace std;

void clearScreen() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

int main() {

int yesOrNo, choice1, subChoice1, choice2, subChoice2, choice3, subChoice3;

cout << "\t\t\t\t*  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *\n";
cout << "\t\t\t\t  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *\n";
cout << "\t\t\t\t   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   *\n";
cout << "\t\t\t\t*  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *\n";
cout << "\t\t\t\t  *   * *  *   * *  *   * *   * *  *   STAR KEK   * *  *   * *  *   * *  *   * *  *   \n";
cout << "\t\t\t\t   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   *\n";
cout << "\t\t\t\t*  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *\n";
cout << "\t\t\t\t  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *\n";
cout << "\t\t\t\t   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   * *  *   *\n";

cout << "Welcome to Star Kek: The Next Generation\n";
cout << "In this adventure, you will take on the role of a crew member aboard the USS Enterprise, a Federation starship on a mission of exploration and diplomacy.\n";
cout << "As you sit at your station on the bridge, surrounded by the hum of the ship's systems and the chatter of your fellow crewmates, you suddenly jolt to consciousness.\n";
cout << "The room is in chaos - alarms blare, sparks fly from damaged consoles, and smoke fills the air.\n";
cout << "Looking around, you see that the Enterprise has been attacked by a group of Ferengi raiders, their small but powerful vessels having penetrated the Enterprise's shields.\n";
cout << "As you scramble to regain your bearings, you know that it's up to you and your crewmates to save the ship, fend off the Ferengi, and prevent any further damage.\n";
cout << "Will you rise to the occasion and become a hero of the Federation? The fate of the Enterprise is in your hands!\n\n";

cout << "Welcome aboard the USS Enterprise. Do you wish to play 1/0: ";
    while(!(cin >> yesOrNo ) || yesOrNo < 0 || yesOrNo > 1){
        cout << "MALFUNCTION......BEEEEEEEPPPPP.....TRY AGAIN\n";
        cout << "Do you wish to play 1/0: ";
        cin.clear();
        cin.ignore(1000, '\n');
        continue;
    }

    if(yesOrNo == 1){
        cout << "\n\nYou quickly assess the situation and see that a small detachment of Ferengi raiders have beamed aboard the Enterprise and are wreaking havoc throughout the ship.\n";
        cout << "Your captain becomes injured and your first officer is struggling to maintain control of the situation.\n";
        cout << "It's now up to you to take charge and lead the effort to repel the invaders and save the ship.\n\n";

        cout << "What will you do?\n";
        cout << "1. Engage the Ferengi in combat.\n";
        cout << "2. Attempt to negotiate a ceasefire.\n";
        cout << "3. Order a retreat to regroup and plan a counterattack.\n";

            while(!(cin >> choice1) || choice1 < 1 || choice1 > 3){
                cout << "Invalid input. Please enter a number between 1 and 3.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

                switch (choice1) {
                case 1:
                    cout << "\n\nYou grab a phaser from your station and lead a team of security officers to engage the Ferengi in hand-to-hand combat.\n";
                    cout << "The battle is fierce, but your training and quick reflexes prove to be an asset in the fight.\n";
                    cout << "After a long struggle, you emerge victorious and the Ferengi retreat from the ship.\n";
                    cout << "As you survey the damage to the Enterprise, you realize that there is a critical problem in the warp core. If you don't fix it soon, the ship will explode!\n\n";

                    cout << "What will you do?\n";
                    cout << "1. Try to fix the warp core yourself.\n";
                    cout << "2. Find an engineer to help you fix the warp core.\n";

                        while(!(cin >> subChoice1) || subChoice1 < 1 || subChoice1 > 2){
                            cout << "Invalid input. Please enter 1 or 2.\n";
                            cin.clear();
                            cin.ignore(1000, '\n');
                            continue;
                        }

                            if(subChoice1 == 1){
                                cout << "\n\nYou rush to the warp core and begin working frantically to fix the problem.\n";
                                cout << "Your hands move quickly over the controls as you try to stabilize the reactor.\n";
                                cout << "Just when you think you've got it under control, a panel explodes in your face!\n";
                                cout << "You wake up in sickbay several hours later with a bandage wrapped around your head.\n";
                                cout << "The captain informs you that the warp core was successfully stabilized thanks to your efforts, but warns you to be more careful in the future.\n";
                                // Continue the story here...
                            }else{
                                cout << "\n\nYou attempt to negotiate a peaceful resolution with the Ferengi, but they are not interested in talking.\n";
                                cout << "They open fire on your team and you are forced to retreat to the Enterprise.\n";
                                cout << "The Ferengi continue their attack on the outpost and it is destroyed. Your captain orders you to pursue the Ferengi and bring them to justice.\n";
                                cout << "You engage the Ferengi in a high-speed pursuit through an asteroid field, dodging debris and firing phasers.\n";
                                cout << "Finally, you manage to disable their ship and take them into custody.\n";
                                // Continue the story here...
                            }
                break;

                case 2:
                    cout << "\n\nYou attempt to hail the Ferengi and negotiate a ceasefire. However, the Ferengi are not interested in diplomacy and respond with a barrage of weapons fire.\n";
                    cout << "You quickly realize that negotiations are not an option and must resort to other means to save the ship.\n";
                    cout << "Your first officer suggests using a deflector pulse to disable the Ferengi ship's weapons.\n\n";

                    cout << "What do you do?\n";
                    cout << "1. Order the deflector pulse to be fired immediately.\n";
                    cout << "2. Try to find another way to disable the Ferengi weapons.\n";

                        while(!(cin >> choice2) || choice2 < 1 || choice2 > 2){
                            cout << "Invalid input. Please enter a number between 1 and 2.\n";
                            cin.clear();
                            cin.ignore(1000, '\n');
                            continue;
                        }

                            if (choice2 == 1) {
                                cout << "\n\nYou order the deflector pulse to be fired immediately. The pulse hits the Ferengi ship and their weapons are disabled.\n";
                                cout << "With the Ferengi no longer a threat, you are able to tend to the injured crew members and begin repairs on the ship.\n";
                                cout << "However, as you work, you begin to realize that the Ferengi attack may have been a diversion for something else.\n\n";

                                cout << "What do you do?\n";
                                cout << "1. Investigate the ship's systems to determine if there are any other threats.\n";
                                cout << "2. Contact Starfleet Command for assistance.\n";
                                cout << "3. Continue with repairs and hope for the best.\n";

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
                break;

                case 3:
                    cout << "";
                                        /*else{
                                            cout << "\n\nYou activate the tractor beam and attempt to bring the Ferengi ship to a stop. However, the Ferengi ship is too powerful and the Enterprise's systems begin to fail.\n";
                                            cout << "You quickly realize that you have made a grave mistake and the ship is lost. All that is left to do is evacuate the remaining crew members and abandon the ship.\n";
                                            // Continue the story here...
                                        } */
                break;
                }
    }
cout << "\nLive long and prosper, Starfleet officer. Until we meet again.";
}