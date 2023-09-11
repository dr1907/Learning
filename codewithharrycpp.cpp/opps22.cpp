  // notes
    // c with classes by jaanne stroustroup
    /* structure had limitation
    --member are in public
    --no methods
    classes= structures +more
    classes can have methods and properties
    we can make few member as public and private in class
    you cannot access the private object directly

    */

//    nesting of member function

#include <iostream>
using namespace std;


class binary
    {
        string s;
        public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
    };

    void binary :: read(void){
        cout<<"enter the binary number of your choice"<<endl;
        cin>>s;
    }

    void binary :: chk_bin(void){
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) !='0' && s.at(i) !='1')
            {
                cout<<"incorrect binary format"<<endl;
                exit(0);
            }
            
        }
        
    }

    void binary :: ones_compliment(void){
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i)=='0')
            {
                s.at(i)='1';
            }
            else{
                s.at(i)='0';
            }
            
        }
        
    }

    void binary :: display(void){
        cout<<"display your binary number"<<endl;
        for (int i = 0; i < s.length(); i++)
        {
            cout<<s.at(i);
        }
        cout<<endl;
        
    }



int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
  
    
    return 0;
}