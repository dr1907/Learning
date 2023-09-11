#include <iostream>
using namespace std;

// struct employee
// {
//     int eid;
//     char favChar;
//     float salary;
// };

// for union

union money
{
    int rice;
    char car;
    float pounds;

};


int main(){
    // if the all type of data are not same then use structure

    // struct employee harry;
    // harry.eid=101;
    // harry.favChar='s';
    // harry.salary=129000;
    // cout<<"the employee id of the person is : "<<harry.eid<<endl;
    // cout<<"the fav vhar   of the person is : "<<harry.favChar<<endl;
    // cout<<"the salary of the person is : "<<harry.salary<<endl;

    // **  in union only one datatype at a time and for better management

    // union money m1;
    // m1.rice=34;
    // cout<<m1.rice;

    // enum
    enum Meal{breakfast, lunch,dinner};
    Meal m1=breakfast;
    cout<<m1;
    // cout<<breakfast;


return 0;
}