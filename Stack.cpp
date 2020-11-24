#include <iostream>
#include <string>

using namespace std;
/* push() - place an item onto the stack
   pop() - return item at the top and remove it
   isEmpty() - tells if the stack is empty or not
   isFull() - tells the stack if it is full or not
   peek() - access the item at the i position
   count() - get the number of items in the stack
   change() - change the item at the i position
   display() - display all items in the stack
   top is set automatically to -1 if there is no values in the stack
*/

class Stack{
  private:
    int top;
    int arr[5];

  public:
    Stack()
    {
      top = -1; //stack is empty
      for(int i = 0; i < 5; i++){
        arr[i] = 0; //assigns each index value to 0 in the stack
      }
    }//default constructor

    bool isEmpty()
    { //return true/false depending on whether stack is empty
      if(top == -1){
        return true;
      } else {
        return false;
      }
    }

    bool isFull()
    {
      if (top == 4){ //if the top of the stack is index 4
        return true;
      } else {
        return false;
      }
    }

    void push(int value) //adding value
    {
      if(isFull())
      {
        cout<<"stack overflow\n";
      }
      else
      {
        top++; //value of top is incremented to allow room for new value
        arr[top] = value;
      }
    }

    int pop() //removing value
    {
      if(isEmpty())
      {
        cout <<"stack underflow\n";
        return 0;
      }
      else
      {
        int popValue = arr[top]; //take value from top of stack and store in popValue
        arr[top] = 0; // "remove" by making the top of the stack = 0
        top--; //reduce top value by 1 so it will point to the next lower index
        return popValue; //return the value that is popped
      }
    }

    int count()
    {
      return(top+1);//index position + 1 (similar to finding number of elements in array)
    }

    int peek(int pos)
    {
      if(isEmpty())
      {
        cout<<"stack underflow\n";
        return 0;
      }
      else
      {
        return arr[pos]; //return value at the position of the stack
      }
    }

    void change(int pos, int value)
    {
        arr[pos] = value;
        cout << "value changed at location" << pos << endl;
    }

    void display()
    {
      cout <<"All values in the Stack are \n";
      for(int i = 4; i >= 0; i--)
      {
        cout << arr[i]<< " " <<endl; //spit out each iteration of Stack
      }
    }
};

int main()
{
  Stack stack1;
  int option, position, value;

  do
  {
    cout << "What operation do you want to perform? Select an option number. Enter 0 to exit.\n";
    cout << "1. Push()\n";
    cout << "2. Pop()\n";
    cout << "3. isEmpty()\n";
    cout << "4. isFull()\n";
    cout << "5. peek()\n";
    cout << "6. count()\n";
    cout << "7. change()\n";
    cout << "8. display()\n";
    cout << "9. Clear Screen\n";
  } while(option!=0);
  return 0;
}
