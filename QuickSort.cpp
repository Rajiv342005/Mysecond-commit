#include "QuickSort.h"
// #include<iostream>
// using namespace std;
// int Partition(int *P,int start,int end) {
//    int pos= start;
//    for (int i=start;i<=end;i++){
//       if (P[i]<=P[end])
//          swap(P[i],P[pos++]);
//    }
//    return pos-1;
// }
// void QuickSort(int *P,int start,int end) {
//    if (start>=end)
//       return;
//    int Index = Partition(P,start,end);
//    QuickSort(P,start,Index-1);
//    QuickSort(P,Index+1,end);
// }
// int main() {
//    int arr[9] ={4,7,3,8,1,2,5,9,6};
//    QuickSort(arr,0,8);
//    for (int i=0;i<9;i++)
//       cout<<arr[i]<<" ";
// }

// int arr[9] = {4,7,3,8,1,2,5,9,6};
// int pointer2=0;
// int pointer1=0;
// int pivot = arr[8];
// while (pointer1<9) {
//     if (arr[pointer1]<=pivot) {
//         int temp =arr[pointer1];
//         arr[pointer1] = arr[pointer2];
//         arr[pointer2] =temp;
//         pointer1++;
//         pointer2++;
//     }
//     else {
//         pointer1++;
//     }
//
// }
// for (int i=0;i<9;i++) {
//     cout<<arr[i]<<" ";
// }


// Inversion Count
#include<iostream>
// using namespace std;
// int main() {
//     int arr[5] = {5,4,3,2,1};
//     int InversionCount=0;
//     for (int i=0;i<5;i++) {
//         for (int j=i;j<5;j++) {
//             if (arr[i]>arr[j])
//                 InversionCount++;
//         }
//     }
//     cout<<"InversionCount is: "<<(InversionCount);
// }

#include<iostream>
using namespace std;
int main() {
    int arr[5]={1,6,8,10,12};
    int target = 11;
    int start=0;
    int end =4;
    while (start<=end) {
        int mid = (start+end)/2;
        if (arr[mid]==target) {
            cout<<"The position of the Target Element is: "<<start;
            return 0;
        }
        if (arr[mid]>target)
            end =mid-1;
        else
            start =mid+1;
    }
    cout<<"The Position of the Target Element is: "<<start;
}