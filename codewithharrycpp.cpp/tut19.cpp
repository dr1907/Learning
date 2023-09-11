#include <iostream>
using namespace std;

// functionn overloading 

int sum(int a, int b){
    return(a+b);
}

float volume(double r, int h){      //volume of cylinder
    return(3.14 *r *r *h);
}

int volume(int l, int b, int h){
    return (l*b*h);
}

int volume(int a){
    return (a*a*a);
}

int main(){
    cout<<"the volume of cube is 3"<<volume(3)<<endl;
    cout<<"the volume of cuboid is 2,3,4 :"<<volume(2,3,1)<<endl;
    cout<<"the volume of cylinder is radius 5,6 "<<volume(5,6)<<endl;
    cout<<"the sum of two number is "<<sum(1,2)<<endl;
    
return 0;
}