#include <iostream>
using namespace std;
const int n=20;

class Queue{
    int *arr;
    int front,back;
    public:
    Queue(){
        arr= new int[n];
        front=back=-1;
    }
    void push(int x)
    {
        if(back==n-1) {
            cout<<"overflow";
            return;
        }
        arr[++back]=x;
        if(front==-1) front++;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"empty";
            return;
        }
        front++;
    }
    int peek()
    {
        if(isEmpty())
        {
            cout<<"empty";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        return (front==-1 || front>back)?true:false;
    }

};
int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();

    q.pop();
    

    return 0;
}
