#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

class Queue{
    node* front;
    node* back;
    public:
    Queue()
    {
        front=NULL;
        back=NULL;
    }
    void push(int x)
    {
        node* inp= new node(x);
        if(front==NULL)
        {
            back=inp;
            front=inp;
            return;
        }
        back->next=inp;
        back=inp;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"underflow";
            return;
        }
        node* temp=front;
        front=front->next;
        delete temp; 
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"empty";
            return -1;
        }
        return front->data;
    }

    bool isEmpty()
    {
        return (front==NULL)?true:false;
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

    // q.pop();
    cout<<q.isEmpty();
    

    return 0;
}
