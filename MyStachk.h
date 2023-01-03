#include "queue"
#include <iostream>
using  namespace std;
class MyStack {

private:
    queue<int> myQueue;
    int len = 0;



public:
    MyStack() {

    }

    void push(int x) {
    myQueue.push(x);
    len++;


    }

    void pop() {
        if(len ==0) return;
        int value=0;

        for (int i=0; i< len ; i++) {
            value = myQueue.front();
            myQueue.pop();
            if (i != (len - 1)) {
                myQueue.push(value);

            }
        }
        len--;
        cout << value;
    }

    int top() {
        return myQueue.back();


    }
//        int top() {
//        int target ;
//      for (int i =0; i< len; i++){
//
//          int value = myQueue.front();
//          myQueue.pop();
//          myQueue.push(value);
//          if (i == len -2){
//              target = myQueue.front();
//          }
//      }
//
//        return target;
//    }
    

    bool empty() {
        if(len ==0) return true;
        return false;
    }




};
