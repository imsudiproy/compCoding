//Reversal Algorith for array rotation
//Code by- Sudip Roy

/*
    EXPLAINATION: 
    In this code we are basically reversing an array by N elements by using reversal algorithm.
    Suppose arr be the array that is needed to be reversed by N elements. 
    Divide the arr int two different arrays, say A and B.
    Such that A[]=[arr[0],arr[1],...,arr[N-1] and B[]= [arr[d], arr[d+1], ... arr[n-1]]
    Now to get reversed array we need to execute 3 steps;
    1. Reverse A to get A'B;
    2. Reverse B to get A'B';
    3. Reverse A'B' to get BA; which is our required result;
*/

#define lln long long int
#define pb push_back
#define pop pop_back
  
  
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp= arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateArray(int arr[], int size, int n)
{
    if(n==0)
        return;
    
    reverseArray(arr,0, n-1);
    reverseArray(arr,n, size-1);
    reverseArray(arr,0, size-1);
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
    int size; //size of the array
    int n;    //Elements to be rotated
    cin>>size;
    cin>>n;
    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    rotateArray(arr, size, n);
    printArray(arr, size);
}