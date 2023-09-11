#include <iostream> 
using namespace std;
int main(){
    int a[5]={10,2,3,4,5}, check,i;
    cout<<"enter the number";
    cin>>check;
    for(i=0; i<5; i++){
        if(check==a[i]){
            cout<<"element found at "<< i <<endl;
            break;
// in linear never mind that the element is sorted or not
        }
    }
}