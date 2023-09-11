#include <iostream>
using namespace std;

// void update(int a){
//     a=a/2;
    
// }
// int main(){
//     int a=10;
//     update(a);
//     cout<<a<<endl;

// }
int fibo(int n){
    int a=0;
    int b=1;
    for (int i = 2; i <= n; i++)
    {
        int next =a+b;
        a=b;
        b=next;
    }
    return b;
    
}
int main(){
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<ans<<endl;
    return 0;
}

