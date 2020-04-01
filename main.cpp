#include <iostream>
#include "Buffer.h"
#include "Interpreter.h"


using namespace std;


int main() {

    Interpreter interpreter;

    do{
        if(interpreter.cancelled){
            return 0;
        }
        int choice;



        interpreter.showIntructions();



        cin >> choice;
        interpreter.checkInitialInput(choice);




    } while(!interpreter.cancelled);

    return 0;
}
