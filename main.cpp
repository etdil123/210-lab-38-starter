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
    // while loop to implement menu functionality
    while (programRun != false) {

        userPick = mainMenu();

        switch(userPick)
        {
            // Insertion
            case 1: {
                // get string to insert in BST
                string addCode;
                cout << "Please enter string to add: " << endl;
                cin >> addCode;

                // use insertNode function to add the string to the BST
                userBST.insertNode(addCode);
                cout << addCode << " has been added to the BST" << endl;
                break;
            }
            // Deletion
            case 2: {
                // get string to delete in BST
                string deleteCode;
                cout << "Please enter string to be deleted: " << endl;
                cin >> deleteCode;

                // use searchNode function to search for user entered code
                bool found = userBST.searchNode(deleteCode);
                // display if value was not found in BST
                if (found == false) {
                    cout << deleteCode << " was not found in BST and cannot be deleted" << endl;
                }
                // use remove to delete node if the value is in the BST
                else {
                    userBST.remove(deleteCode);
                    cout << deleteCode << " has been removed from the BST" << endl;
                }
                break;
            }
            // Search
            case 3: {
                // get string to search for in BST
                string searchCode;
                cout << "Please enter string to search for: " << endl;
                cin >> searchCode;
                
                // use searchNode function to search for user entered code
                bool found = userBST.searchNode(searchCode);
                // display to user if user entered code was found or not
                if (found == true)
                    cout << searchCode << " was found in the BST" << endl;
                else
                    cout << searchCode << " was not found in the BST" << endl;
                break; 
            }
            // Modification
            case 4: {
                


                break;
            }
            // End Program
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