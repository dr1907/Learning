#include <iostream>
using namespace std;

class shop
{
    int itemId[10];
    int itemPrice[10];
    int counter;

public:
void initcounter(void){counter =0;}
void setPrice(void);
void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"enter id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter the price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayPrice(void){
    for (int  i = 0; i < counter; i++)
    {
        cout<<"the price of item with ID "<<itemId[i]<<"is"<<itemId[i]<<endl;
    }
    

    
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();


     

    

return 0;
}