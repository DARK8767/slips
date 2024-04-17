#include <iostream>
using namespace std;

class Array 
{
  private:
    float arr[5];
  public:
    Array() 
    {
     for(int i = 0; i < 3; i++) 
     {
     arr[i] = 3;
     }
    }
    friend Array operator++(Array& a) 
    {
     for(int i = 0; i < 3; i++) 
     {
      a.arr[i]++;
     }
     return a;
    }

    friend Array operator--(Array& a) 
    {
      for(int i = 0; i < 3; i++) 
        {
         a.arr[i]--;
        }
      return a;
    }

    void display() 
    {
      for(int i = 0; i < 3; i++)
       {
        cout << arr[i] << " ";
       }
      cout << endl;
    }
};

int main(void)
{
    Array arr1;
    cout << "Initial array values: ";
    arr1.display();

    ++arr1;
    cout << "After increment: ";
    arr1.display();

    --arr1;
    --arr1;
    cout << "After decrement: ";
    arr1.display();
}