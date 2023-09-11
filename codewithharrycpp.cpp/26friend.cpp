#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNumber(int n1, int n2){
        a=n1;
        a=n2;
    }
    friend Complex sumcomplex(Complex o1, Complex o2);
    void printNumber(){
        cout<<"your number is "<<a<<"+" <<b<<"i"<<endl;
    }
};

Complex sumcomplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}


int main(){
    Complex c1,c2,sum;
    c1.setNumber(1,3);
    c1.printNumber();

    c2.setNumber(3,4);
    c2.printNumber();
    
    sum=sumcomplex(c1,c2);
    sum.printNumber();

return 0;
}

/*properties

not in the  scope of class 
since it is not in the scope of the class it cannot be called from the oobject of that class c1.sumComplex()==invalid
can be invoked without the help of any object 
usually contians the objects as argument 
can be declared inside public or private section of the class
it cannot access the menver diretly by their names and need objectname.member name to access any memeber
*/