#include<iostream>
#include <math.h>
using namespace std;
int main (){

    // note:-
    // for finding the digit we have to do %10 and /10
    // for finding the bits we have to do n&1 and >>1
    // int n;
    // cin>>n;
    // // binary to decimal form
    // int i=0, ans=0;   
    // while (n!=0)
    // {
    //     int digit=n%10;
    //     if(digit==1){
    //         ans=ans+pow(2,i);

    //     }
    //     n=n/10;
    //     i++;
    // }
    // cout<<ans<<endl;
// ****************************
// for finding decimal to binary form .....
//     int n;
// cin>>n;
// int ans=0;
// int i=0;
// while (n!=0)
// {
//     int bit=n & 1; 
//     ans=(bit*pow(10,i))+ans;
//     n=n>>1;
//     i++;
// }
// cout<<"answer is "<<ans<<endl;

//  *************************reverse a digit and if the digit is {2^-31,2^31-1}return o?
// ans

// int reverse(int x){
//     int ans=0;
//     while(x!=0){
//         int digit=x%10;
//         if((ans>INT_MAX) || (ans<INT_MIN/10)){
//             return 0;
//         }
//         ans=(ans*10)+digit;
//         x=x/10;

//     }
//     return ans;
// }

// ****** complement base 10 interger 
// int bitwisecomplement (int n){
//     int m=n;
//     int mask=0;
// if(n==0){
//     return 0;
//     if(n==0){
//         return 1;
//     }
//     while(m!=0){
//         mask=(mask<<1)| 1;
//         m=m>>1;

//     }
//     int ans=(~n)& mask;
//     return ans;
// }

// power of two number is in the form of n==2^x
// bool ispoweroftwo(int n){
//     for (int i = 0; i <= 30; i++)
//     {
//         int ans=pow(2,i);
//         if(ans==n){
//             return true;
//         }
//         int ans= ans*2;
        
//     }
//     return false;
    
// }

}




