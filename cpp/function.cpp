#include <iostream>
using namespace std;
// power
/*int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {

        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

   int answer= power(a, b);
   cout<<"the answer of this is : "<<answer<<endl;
}*/

// is even  or odd
/*bool isEven (int a){
    // odd
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cin>>num;
    if (isEven(num))
    {
        cout<<"the number is even "<<endl;
    }
    else{
        cout<<"is odd"<<endl;
    }
    
}*/

// faactorial ncr 

// int factorial(int n){
//     int fact=1;
//     for (int i = 1; i <=n; i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
    
// }
// int nCr(int n,int r){
//     int num=factorial(n);
//     int deno=factorial(r)*factorial(n-r);
//     return num/deno;
     
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<"answer"<<nCr(n,r)<<endl;

// }
// counting *****
// void printcounting(int n){
//     for(int i=1; i<=n; i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printcounting(n);
//     return 0;
// }

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;

}
int main(){
    int n;
    cin>>n;
    if (isPrime(n))
    {
        cout<<"the  is  prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    

}
