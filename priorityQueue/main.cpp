#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <fstream>
//#include <sstream>
#include "priorityQueue.h"
//#include "node.h"
using namespace std;

//void perform(char choice, priorityQueue<string, int> &theQueue);
//char menu();

int main()
{
//        cout << "enq-1\n";
    priorityQueue<int,int>* p = new priorityQueue<int,int>;

        p->enqueue(5,6);


//        p->enqueue(1,1);

//    int i;
//    p->dequeue(i);

//    cout << i << endl;
//    cin >> *p;

        cout << *p << endl;


//    node<int,int> *n = new node<int,int>(5,7);

//    cout << *n << endl;

//    cout << "Hello\n";
    return 0;
}

