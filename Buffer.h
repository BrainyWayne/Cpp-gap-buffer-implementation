#include <iostream>



using namespace std;

class Buffer {

public:



    int sizeGap = 2;
    int leftGap = 0;
    int rightGap = sizeGap - leftGap - 1;
    int size = 1;

    char *buffer;

    int position;


    Buffer(){


       buffer = new char[10];


        string input = "Hello world!";
        position = 0;

        insertchar(input, position);

    }



    void printOutput(){


        cout << endl << "cursor: " << size - 1 << endl;

        cout << "size: " << size << endl;
        cout << endl;


        for(int i = 0; i < size; i++){
            cout << i << "|\t";
        }

        cout << endl;


        for (int i = 0; i < size; i++) {

            cout << buffer[i]<<"|\t";
        }

        cout << endl;
        for(int i = 0; i < size; i++){
            if(i == size-1){
                cout << "^";
            } else{
                cout << "\t";
            }
        }


        cout << endl<<endl;

    }




    void append(string input, int positions)
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
                    int k = len;
                    buffergrowth(k, positions);
                }


                try {

                    buffer[leftGap] = input[i];
                } catch (exception e){
                    cout << e.what();
                }

                leftGap++;
                i++;
                positions++;


            }

            position = positions;


            printOutput();




    }



    //character insertion interface

    void insertchar(string input, int positions)
    {
            int len = input.length();
            int i = 0;


            if (positions != leftGap) {
                move_cursor(positions);
            }



            while (i < len) {
                if (rightGap == leftGap) {
                    int k = len;
                    buffergrowth(k, positions);
                }



                buffer[leftGap] = input[i];
                leftGap++;
                i++;
                positions++;


            }

            position = positions;
            printOutput();

    }


    //cursor move interface
    void move_cursor(int position)
    {
        if (position < leftGap) {
            left(position);
        }
        else {
            right(position);
        }
    }



    //move the gap to the left
    void left(int position)
    {

        while (position < leftGap) {
            leftGap--;
            rightGap--;
            buffer[rightGap + 1] = buffer[leftGap];
            buffer[leftGap]=' ';
        }
    }

    //move the gap to the right
    void right(int position)
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

    void buffergrowth(int k, int position)
    {

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

    void deletion(int position, int charToRight)
    {

        if (position + 1 != leftGap) {
            move_cursor(position + 1);
        }

        leftGap -= charToRight;
        buffer[leftGap] = ' ';


        printOutput();
    }

};

