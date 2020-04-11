#include <iostream>
#include <algorithm>
#include "Interpreter.h"
#include "Buffer.h"


#include <iostream>
using namespace std;



Buffer buffer;


    bool Interpreter::getCancelled(){
        return cancelled;
    }

    void Interpreter::showIntructions(){
        cout << "1 to delete" << endl;
        cout << "2 to append text" << endl;
        cout << "3 to insert at position" << endl;
        cout << "0 to Exit"<< endl;
        cout << "Enter action: " ;
    }

void Interpreter::isCancelled(int choice){
    if(choice == -1){
        cout << "Cancelled" << endl;
        cancelled = true;
        exit(0);
    }
}

void Interpreter::isCancelledString(string choice){
        if(choice == "-1"){
            cout << "Cancelled" << endl;
            cancelled = true;
            exit(0);
        }
    }


    void Interpreter::checkInitialInput(int choice){

        switch (choice){
            case 1:
            {
                cout << "Where to delete? (-1) to cancel: " ;
                int position;
                cin >> position;
                isCancelled(position);



                cout << endl << "How many characters to the right? (-1) to cancel";
                int charToRight;
                cin >> charToRight;
                isCancelled(charToRight);

                buffer.deletion(position, charToRight);

                break;
            }
            case 2:
            {
                cout << "Enter text to append, (-1) to cancel: ";
                string input;
                cin >> input;
                isCancelledString(input);
                executeChoice(2, input, buffer.getPosition());
                break;
            }
            case 3:
            {
                cout << "At which position to insert? (-1) to cancel: ";
                int position;
                cin >> position;
                isCancelled(position);

                cout << "Enter text to insert, (-1) to cancel: ";
                string input;
                cin >> input;
                isCancelledString(input);

                executeChoice(3, input, position);


                break;
            }
            case 0:
                cout << "Exiting..." << endl;
                isCancelled(-1);
                break;

            default:
                cout << "Enter a valid choice" << endl;
        }
    }


    void Interpreter::executeChoice(int choice, string input, int position) {
        switch (choice){
            case 1:
            {
                buffer.deletion(position, stoi(input));
            }
                break;
            case 2:
            {
                buffer.append(input, position);
            }

                break;

            case 3: {
                buffer.insertchar(input, position);
                break;
            }



            default:
                cout << "An error occured" << endl;
        }
    }

