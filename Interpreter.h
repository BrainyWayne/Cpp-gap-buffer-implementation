#include <iostream>
using namespace std;


class Interpreter {

public:
    Buffer buffer;
    bool cancelled = false;



     void showIntructions(){
        cout << "1 to delete" << endl;
        cout << "2 to append text" << endl;
        cout << "3 to insert at position" << endl;
        cout << "0 to Exit"<< endl;
        cout << "Enter action: " ;
    }

    void isCancelled(int choice){
        if(choice == -1){
            cout << "Cancelled" << endl;
            cancelled = true;
            exit(0);
        }
    }

    void isCancelledString(string choice){
        if(choice == "-1"){
            cout << "Cancelled" << endl;
            cancelled = true;
            exit(0);
        }
    }


    void checkInitialInput(int choice){

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
                executeChoice(2, input, buffer.position);
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


    void executeChoice(int choice, string input, int position) {
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

};