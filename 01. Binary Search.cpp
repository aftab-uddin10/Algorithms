#include <iostream>
using namespace std;

int binarySearch (int A[],int size , int S){
  
  int l=0,r=size-1;
  while (l<=r){
    int mid = l+(r-l)/2;
    
    if(A[mid] == S)
    return mid;
    
    if(A[mid]<S)
    l = mid+1;
    
    else r=mid-1;
  }
   return -1;
}

int main(){
  int A[] ={ 2,4,6,8,10,12,14};
  int size = sizeof(A)/sizeof(A[0]) ;
  int S =10;
  
  int result = binarySearch(A,size,S);
  if(result != -1)
     cout << "Element found at index: " << result << endl;
     else cout << "Element not found in the array. "<< endl;
     
     return 0;
}
