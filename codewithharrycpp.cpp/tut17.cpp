#include <iostream>
using namespace std;
inline int product(int a ,int b){
    // static int c=0; // this execute only once
    // c=c+1; // next time this function is run the value of c will be retained
    return a*b;
}

int main(){
    int a,b;
    cout<<"enter the value of a and b is "<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is :"<<product(a,b)<<endl;
    cout<<"the product of a and b is :"<<product(a,b)<<endl;

return 0;
}