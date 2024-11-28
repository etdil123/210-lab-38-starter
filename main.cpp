#include <iostream>
#include "IntBinaryTree.h"
#include "IntBinaryTree.cpp"
#include <string>
#include <fstream>
using namespace std;


int mainMenu();

int main() {

    // open codes file with data to read into BST
    ifstream codes("codes.txt");
    string temp;

    // Create an instance of a StringBinaryTree class
    StringBinaryTree userBST;

    // Read the codes file into BST by using insertNode
    while(getline(codes, temp)) {
        userBST.insertNode(temp);
    }

    bool programRun = true;
    int userPick;

    while (programRun != false) {

        userPick = mainMenu();

        switch(userPick)
        {
            case 1:
                cout << "Please input string to add into BST: " << endl;
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                //exit menu loop
                programRun = false;
                cout << "Thank you for using BST Program!" << endl;
                break;
        };
    }
    
    return 0;
}

int mainMenu() {

    int userOption;
    // menu string to display to user
    string menuDisplay = "** Binary Search Tree ** - Select an option below:\n[1] Add Record\n[2] Delete\n[3] Search\n[4] Modify\n[5] Quit\n";

    cout << menuDisplay;
    cin >> userOption;

    // input validation - make sure user inputs bewteen 1 and 4 or keep asking
    while (userOption < 1 || userOption > 5) {
        cout << "Please select valid option between 1 and 5" << endl;
        cout << menuDisplay;
        cin >> userOption;
    }

    return userOption;
}