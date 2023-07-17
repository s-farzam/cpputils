
#include <iostream>
#include <vector>

using namespace std;


int main() {

    char selection {};
    vector<int> vect {};

    do {

        cout << "\nP - Print numbers." << endl;
        cout << "A - Add a number." << endl;
        cout << "M - Display mean of the numbers." << endl;
        cout << "S - Display the smallest numbers." << endl;
        cout << "L - Display the largest numbers." << endl;
        cout << "Q - Quit." << endl;

        cout << "\nEnter your selection: ";
        cin >> selection;

        switch (selection) {

        case 'P':
        case 'p': {
            if (vect.size() == 0)
                cout << "[] the list is empty." << endl;
            else {
                cout << "[";
                for (int item : vect)
                    cout << " " << item << " ";
                cout << "]" << endl << endl;
                 }//;
             break;
            }

        case 'A':
        case 'a': {
                    int appendee {};
                    cout << "Enter the number to be added: ";
                    cin >> appendee;
                    vect.push_back(appendee);
                    cout << appendee << " added to the list." <<endl;
                    break;
                  }

        case 'M':
        case 'm': {
                    if (vect.size() != 0) {
                        double avg {}, sum {};
                        for (int item : vect)
                            sum += item;
                        avg = sum / vect.size();
                        cout << avg << endl;
                        }
                    else
                        cout << "The list is empty." << endl;
                    break;

                  }

        case 'S':
        case 's': {  // TODO: Check if list is empty.
                    int smallest {vect.at(0)};
                    for (int item : vect) {
                        if (item < smallest)
                            smallest = item;
                    }
                    cout << "The smallest number is: " << smallest;
                    break;
                  }

        case 'L':
        case 'l': {
                    int largest {vect.at(0)};
                    for (int item : vect) {
                        if (item > largest)
                            largest = item;
                    }
                    cout << "The largest number is: " << largest;
                    break;
                  }

        case 'Q':
        case 'q':
            cout << "Goodbye!" << endl;
            break;


        default:
            cout << "Invalid selection. Choose from the menu!" << endl;

        }

    } while (selection != 'Q' && selection != 'q');


    return 0;
}
