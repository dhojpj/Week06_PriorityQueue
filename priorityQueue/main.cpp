#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <fstream>
//#include <sstream>
#include "priorityQueue.h"

using namespace std;

//void perform(char choice, priorityQueue<string, int> &theQueue);
//char menu();

int main()
{
        cout << "enq-1\n";
    priorityQueue<int,int>* p = new priorityQueue<int,int>;
        cout << "enq0\n";

        p->enqueue(5,6);


        p->enqueue(1,1);


        cout << p->peek() << endl;


//    cout << "Hello\n";
    return 0;
}

