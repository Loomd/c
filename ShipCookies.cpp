// Aaron Hunter
// Calculate the number of each carton(s) (group by size) and left over boxes that don't fit in carton. 

#include <iostream>

using namespace std;

const int EXTRA_LARGE_CARTON = 250;
const int LARGE_CARTON = 120;
const int MEDIUM_CARTON = 50;
const int SMALL_CARTON = 20;


int main() {

    int numOfCookies;
    int leftOver = 0;
    int extraLargeC, largeC, mediumC, smallC;

    cout << "How many cookies were manufactured today: " << endl;
    cin >> numOfCookies;

    extraLargeC = numOfCookies / EXTRA_LARGE_CARTON;
    leftOver = numOfCookies % EXTRA_LARGE_CARTON;

    largeC = leftOver / LARGE_CARTON;
    leftOver = leftOver % LARGE_CARTON;

    mediumC = leftOver / MEDIUM_CARTON;
    leftOver = leftOver % MEDIUM_CARTON;

    smallC = leftOver / SMALL_CARTON;
    leftOver = leftOver % SMALL_CARTON;

// going to output the results and input now. (table formatted)
    cout << "Total Boxes made Today: " << numOfCookies << endl;
    cout << "Boxes left out of cartons: " << leftOver << endl;

    cout << "Carton size\t" << "Cartons Needed" << endl;
    cout << "Extra Large\t" << extraLargeC << endl;
    cout << "Large\t\t" << largeC << endl;
    cout << "Medium\t\t" << mediumC << endl;
    cout << "Small\t\t" << smallC << endl;

    return 0;
}
