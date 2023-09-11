#include <iostream>
using namespace std;

void swap (int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
// call by reference using pointeer
void swapPointer (int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=4,y=9;
    cout<<"the first value is a"<<x<<"the second value is b"<<y<<endl;
    //swap(x,y); //due to the actuall variable the value of x adn y are only copy on it and not display

    swapPointer(x,y);

    
    cout<<"the first value is a"<<x<<"the second value is b"<<y<<endl;


return 0;
}