#include <iostream>
using namespace std;

int main(){
    // pointer is a data type which hold the address of the other data type

    int a=3;
    int* b;
    b=&a;

    // &-- address of operator
    cout<<"the address of a is : "<<&a<<endl;
    cout<<"the address of b is : "<<b<<endl;


    // * -- (value at) dereference operator

    cout<<"the value at address b is : "<<*b<<endl;

// pointer to pointer
int 


return 0;
}