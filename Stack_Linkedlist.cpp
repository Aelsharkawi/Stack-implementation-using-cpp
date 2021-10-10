 #include <iostream>
 using namespace std;

 template <class type>  //using templete to can usig many data type

 class linkedstack
 {
    //will using struck to create node ( have two location [data , link to another node])
    struct node
    {
        type item; // item to store data
        node *next; // next to can linked with other node
    };
    node *top;
public:
    linkedstack(){top = NULL;}
    bool isempty(){return top == NULL;}
    //push function to add elements in stack
    void push(type data)
    {   
        node *newnode = new node; 
            newnode->item = data;
            newnode->next = top;
            top = newnode;
    }
    //pop function to earse elements from stack
    void pop()
    {
        if(isempty()){cout<<"Stack is empty!\n";}
        else
        {
            node *cur = top;
            top = top->next;
            cur = cur->next = NULL;
            delete cur;
        }
    }
    //function to can print the deleted element
    void pop(type &stacktop)
    {
        if(isempty()){cout<<"Stack is empty!\n";}
        else
        {
            stacktop = top->item;
            node *cur = top;
            top = top->next;
            cur = cur->next = NULL;
            delete cur;
        }
    }
    //function to get top element
    void peak(type &stacktop)
    {
        if(isempty()){cout<<"Stack is empty!\n";}
        else
        {
            stacktop = top->item;
        }
    }
    //function to print all elements of stack;
    void print()
    {   node *cur = top;
        cout<<"Stack:[ ";
        while(cur != NULL)
        {
            cout<<cur->item<<" ";
            cur = cur->next;
        }
        cout<<"]\n";
    }
 };

 int main()
 {
    linkedstack <int> ls;
    ls.push(10);
    ls.push(20);
    ls.push(30);
    int top = 0;
    ls.peak(top);
    cout<<"Top Element: "<<top<<endl;
    ls.print();
    cout<<"----------\n";
    ls.pop();
    ls.print();
    int s;
    ls.pop(s);
    ls.print();
    cout<<"Deleted element: "<<s<<endl;
 }