#include <iostream>
using namespace std;
// fibo== 1,1,2,3,5,8,`3,21.......
int fibonacci (int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2)+ fibonacci(n-1);
    
}

// int factorial(int n){
//     if (n<=1)
//     {
//         return 1;
//     }
//     return n* factorial(n-1);}

    


int main(){
    // int a ;
    // cout<<"enter the number"<<endl;
    // cin>>a;
    // cout<<"the factorial of "<<a<<" is " <<factorial(a)<<endl;
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    cout<<"the term in fibonacci sequence at term "<<a<<"is "<<fibonacci(a)<<endl;


return 0;
}