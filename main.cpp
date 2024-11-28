#include <iostream>
#include "IntBinaryTree.h"
#include <string>
#include <fstream>
using namespace std;


int mainMenu();

int main() {
    

    // int userPick;

    // userPick = mainMenu();

    // open codes file
    ifstream codes("codes.txt");
    string temp;
    // Create a BST
    StringBinaryTree userBST;

    // Read the codes into new nodes to be added into BST
    while(getline(codes, temp)) {
        userBST.StringBinaryTree::insertNode(temp);
    }

    userBST.displayInOrder();

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