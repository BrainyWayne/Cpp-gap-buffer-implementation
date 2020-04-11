#include <iostream>
#include "Interpreter.h"


using namespace std;


int main() {

    Interpreter interpreter;

    do{
        if(interpreter.getCancelled()){
            return 0;
        }
        int choice;
        interpreter.showIntructions();
       cin >> choice;
        interpreter.checkInitialInput(choice);




    } while(!interpreter.getCancelled());

    return 0;
}
