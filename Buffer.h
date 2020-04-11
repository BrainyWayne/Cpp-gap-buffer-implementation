#ifndef BUFFER_H_INCLUDED
#define BUFFER_H_INCLUDED

using namespace std;
///Declaring class
class Buffer{
    char* buffer;
    int position;
    int sizeGap = 2;
    int leftGap = 0;
    int rightGap = sizeGap - leftGap - 1;
    int size = 1;
public:
    Buffer();
    ~Buffer();
    void deletion(int position, int charToRight);
    void append(string input, int positions);
    void insertchar(string input, int positions);
    void printOutput();
    void left(int position);
    void right(int position);
    void buffergrowth(int k, int position);
    void move_cursor(int position);
    int getPosition();
};


#endif // BUFFER_H_INCLUDED
