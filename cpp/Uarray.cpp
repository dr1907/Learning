#include <iostream>
using namespace std;
int main (){
    // // int a[]={4,8,5,2,1,9,0};
    // int sum=0;
    // for(int i=0; i<=6;i++){
    //     sum=sum+a[i];
    // }
    
    // cout<<"the sum of this array is : "<<sum<<endl;

// pre increment post increment 
    //    int i=9; 
    //    cout<<(++i)<<endl;  //i=10,10
    //    cout<<(i++)<<endl;   //i=10,11
    //    cout<<(--i)<<endl;     //10,10
    //    cout<<(i--)<<endl;     //10,9

//1 to n;
    // int n;
    // cin>>n;
    // cout<<"enter the no upto which you wnat to count"<<endl;
   
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<i<<endl;
    // }

//  sum of all elemet in the arrays
    // int arr[]={1,2,3,4};
    //   int sum, length ;
    //   sum=0;
    //   length=sizeof(arr)/sizeof(arr[0]);
    //   for (int i = 0; i < length; i++)
    //   {
    //     sum=sum+arr[i];
    //   }
    //   cout<<"sum of all the element in the array is : "<<sum<<endl;
      
    //  reverse the element of array 
    int arr[1,2,3];
    int length=sizeof(arr)/sizeof(arr[0]);;
    int temp;
    for ( int i = 0, j=length-1; i < j; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
    
       

    




