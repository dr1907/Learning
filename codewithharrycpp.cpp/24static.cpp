#include <iostream>
using namespace std;
class employee{
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;

    }
    void getData(void){
        cout<<"the id of this employee is "<<id << " and this employee number "<<count <<endl;
    }

    static void getCount(void){    //static function 
        cout<<"the value of count is "<<count <<endl;
    }
};

int employee :: count;   //default value is 0     -- static class
int main(){
    employee harry, deepak;

    // count is the static data meember of class employee

    harry.setData();
    harry.getData();
    employee :: getCount();

    deepak.setData();
    deepak.getData();
    employee :: getCount();




return 0;
}