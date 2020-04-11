#ifndef INTERPRETER_H_INCLUDED
#define INTERPRETER_H_INCLUDED

///declaring the class
class Interpreter{
    bool cancelled = false;

public:

    void showIntructions();
    void isCancelledString(std::string choice);
    void checkInitialInput(int choice);
    void isCancelled(int choice);
    void executeChoice(int choice, std::string input, int position);
    bool getCancelled();
};


#endif // INTERPRETER_H_INCLUDED
