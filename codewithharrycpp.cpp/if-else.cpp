#include <iostream>
using namespace std;
int main(){
    int age;

    cout<<"tell me your age: "<<endl;
    cin>>age;
    // selection control structure if else if else ladder
    // if(age<18){
    //     cout<<"u cannot come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid go and play"<<endl;
    // }
    // else{
    //     cout<<"come to the party "<<endl;
    // }

    // selection control structure switch
    switch (age)
    {
    case 18:
    cout<<"you are 18"<<endl;
        break;
    case 19:
    cout<<"you are 19"<<endl;
        break;
    case 20:
    cout<<"you are 20"<<endl;
        break;
    
    default:
        cout<<"you are other now"<<endl;
        break;

    

        
    }


cout<<"done with switch case";

    return 0;

}