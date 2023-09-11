// #include <iostream>
// using namespace std;

// int main(){

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<i<<endl;
    //     if (i==2)
    //     {
    //         break;
            
    //     }
        
    // }
    

    // for (int  i = 1; i < 10; i++)
    // {
    //     if (i==3){
    //         continue; //leave 3 and jump to next number

    //     }
    //     cout<<i<<endl;
    // }

#include <iostream>
#include <cstdio>
using namespace std;

   int main() {
    int a, b;
    string numbers[] = {"one", "two", "three", "four", "five", 
        "six", "seven", "eight", "nine"};
    cin >> a >> b;
    
    for(int i = a; i <= b; i++){
        if(i <= 9){
            cout << numbers[i - 1] << '\n';
            }
        else if(i > 9 && i % 2 == 0){ 
            cout << "even" << '\n';}
            
        else{
            cout << "odd" << '\n';}
             
    }
    
    return 0;
}
   
    







// return 0;
// }