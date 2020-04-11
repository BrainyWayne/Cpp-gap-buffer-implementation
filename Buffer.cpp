#include <iostream>
#include <algorithm>
#include "Buffer.h"


using namespace std;


    Buffer::Buffer() {
        buffer = new char[10];
        string input = "Hello world!";
        position = 0;
        insertchar(input, position);
    }

        Buffer::~Buffer() {
        delete [] buffer;
        }



     int Buffer::getPosition(){
         return position;
    }

    void Buffer::printOutput(){
        cout << endl << "cursor: " << size - 1 << endl;
        cout << "size: " << size << endl;
        cout << endl;

        for(int i = 0; i < size; i++){
            cout << i << "|\t";
        }

        cout << size << "|" << endl;

        for (int i = 0; i < size; i++) {
            cout << buffer[i]<<"|\t";
        }

        cout << " |" << endl;

        for(int i = 0; i < size; i++){
            if(i == size -1 ){
                cout << "\t^";
            } else{
                cout << "\t";
            }
        }
        cout << endl<<endl;
    }


    void Buffer::append(string input, int positions)
    {
        positions = position;
        int len = input.length();
        int i = 0;

        if (positions != leftGap) {
            move_cursor(positions);
        }

        // Insert characters one by one
        while (i < len) {
            // If the gap is empty grow the size
            if (rightGap == leftGap) {
                int k = 1;
                buffergrowth(k, positions);
            }
            buffer[leftGap] = input[i];
            leftGap++;
            i++;
            positions++;
        }
        position = size - 1;
        printOutput();
    }



    //character insertion interface

    void Buffer::insertchar(string input, int positions)
    {
        int len = input.length();
        int i = 0;
          if (positions != leftGap) {
            move_cursor(positions);
        }

          while (i < len) {
            if (rightGap == leftGap) {
                int k = 1;
                buffergrowth(k, positions);
            }
            buffer[leftGap] = input[i];
            leftGap++;
            i++;
            positions++;
          }
          position = size - 1;
        printOutput();

    }


    //cursor move interface
    void Buffer::move_cursor(int position)
    {
        if (position < leftGap) {
            left(position);
        }
        else {
            right(position);
        }
    }



    //move the gap to the left
    void Buffer::left(int position)
    {

        while (position < leftGap) {
            leftGap--;
            rightGap--;
            buffer[rightGap + 1] = buffer[leftGap];
            buffer[leftGap]=' ';
        }
    }

    //move the gap to the right
    void Buffer::right(int position)
    {
        // Move the gap right character by character
        // and the buffers
        while (position > leftGap) {
            leftGap++;
            rightGap++;
            buffer[leftGap - 1] = buffer[rightGap];
            buffer[rightGap]=' ';
        }
    }

    void Buffer::buffergrowth(int k, int position)
    {
        //declare new array a with size size
        char a[size];
        for (int i = position; i < size; i++) {
            a[i - position] = buffer[i];
        }

        for (int i = 0; i < k; i++) {
            buffer[i + position] = ' ';
        }

        for (int i = 0; i < position + k; i++) {
            buffer[position + k + i] = a[i];
        }
        size += k;
        rightGap+=k;
    }

    void Buffer::deletion(int position, int charToRight)
    {
        if (position + 1 != leftGap) {
            move_cursor(position);
        }

        leftGap = position + charToRight;
        for(int i = position; i < leftGap; i++){
            buffer[leftGap] = ' ';
        }
        printOutput();
    }




