#include<iostream>
#include<stdlib.h>
using namespace std;
void reverse(int arr[],int n){
    int end=n-1;
     for(int i=0;i<n/2;i++){
        swap(arr[i],arr[end]);
        end--;
     }
}
int main()
{
    int arr[5]={12,3,3,16,18};
     cout<<"Before reverse:"<<endl;
    for(int i=0;i<5;i++)
          cout<<arr[i]<<" ";
    reverse(arr,5);
   cout<<endl<<"After reverse:"<<endl;
      for(int i=0;i<5;i++)
          cout<<arr[i]<<" ";

}
