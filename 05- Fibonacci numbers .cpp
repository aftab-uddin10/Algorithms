/***
          Bismillahir Rahmanir Rahim
          Start with the name of Allah, who created you!!!
          Author : MD Aftab Uddin Bhuiyan
          Department of CSE, Dhaka international University, Bangladesh.
***/

#include <iostream>
using namespace std;

int fibonacci(int n){
    int A[n+1];
    for(int i=0; i<=n ;i++){
        A[i] =-1;
    }
    if(n <= 1){
        return n;
    }
    if( A[n] != -1){
        return A[n];
    }
    else A[n] = fibonacci(n-1) + fibonacci(n-2);
    
    return A[n];
}

int main() {
   int n;
   cout<< "Enter the value of n: ";
   cin>>n;
   
   cout<<"Fibonacci Series: ";
   for (int i=0; i<=n ; i++){
       cout<< fibonacci(i)<<" ";
   }
   cout<<"\n Fibonacci Number: "<<fibonacci(n)<<endl;
   
    return 0;
}
