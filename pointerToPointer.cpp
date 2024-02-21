#include <iostream>

using namespace std;

int main()
{

    int x, *p ,**q;//int x, *p, **q;: Declares an integer x, a pointer to an integer p, and a pointer to a pointer to an integer q
    x=10;// Initializes the integer x with the value 10.
    p=&x;//Assigns the address of x to the pointer p. Now, p points to the memory location where the value of x is stored.
    q=&p;//Assigns the address of p to the pointer to pointer q. Now, q points to the memory location where the value of p is stored.
    cout<<**q;//Outputs the value at the address pointed by q. Since q points to the address of p, and p points to the address of x, **q retrieves the value of x (which is 10 in this case).

    return 0;
}












