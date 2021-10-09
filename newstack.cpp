#include <iostream>
#include <string>
using namespace std;

const int max_size = 100;
template <class type>  //we used templete to can use many data type
class stack
{   
    int top;
    type list[max_size];
public:
    stack(){top = -1;} //default constructor

    //function to check stack is empty or not
    bool isempty(){return top < 0;}
    //function to check stack is full or not
    bool isfull(){return top == max_size-1;}
    // declare and implement function to adding elements to stack
    void push(type data)
    {
        if(isfull()){cout<<"Stack is full!\n";}
        else
        {
            top++;
            list[top] = data;
        }
    }
    //declaring and implement function to delete elements from stack
    void pop()
    {
        if(isempty()){cout<<"Stack is empty!\n";}
        else
        {top--;}
    }
    //declaring and implement function to delete elements from stack but save data before delete it
    void pop(type &element)  //using & to save value to can use it if needed.
    {
       if(isempty()){cout<<"Stack is empty!\n";}
        else
        {
            element = list[top];
            top--;
        } 
    }
    //declaring function to get top of stack
    void peak(type &stacktop)  //using & to save value to can use it
    {
        if(isempty()){cout<<"Stack is empty!\n";}
        else
        {
            stacktop = list[top];
            cout<<"Top element: "<<stacktop<<endl;
        }
    }
    //function to print data of stack
    void print()
    {   
        cout<<"Stack :[ ";
        for(int i=0; i<=top; i++)
        {
            cout<<list[i]<<" ";
        }
        cout<<"]\n";
    }
};

int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();
    s.pop();
    s.print();
    int top,pop;
    s.peak(top);
    //cout<<top<<endl;
    s.pop(pop);
    cout<<"Deleted element :"<<pop<<endl;
    s.print();
    cout<<"-----------------------\n";
    //create stack of string
    stack <string> ss;
    ss.print();
    ss.push("Abdullah"); 
    ss.push("Ahmed");
    ss.push("Sara");
    ss.push("Nada");
    ss.push("Nadia");
    string topp, popp;
    ss.peak(topp);
    ss.print();    
    ss.pop(); 
    ss.pop(popp); 
    cout<<"Deleted element :"<<popp<<endl;         
    ss.print();  
}