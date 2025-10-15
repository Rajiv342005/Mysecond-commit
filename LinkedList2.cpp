#include "LinkedList2.h"
#include<iostream>
#include<vector>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node *prev;
};
int main() {
    int arr[5] = {1,2,3,4,5};
    Node *head = new Node();
    Node *temp = head;
    Node *temp2 = head;
    for(int i=0;i<5;i++) {
        if (i<4) {
            temp->data = arr[i];
            temp->next = new Node();
            temp = temp->next;
            temp->prev = temp2;
            temp2 = temp2->next;
        }
        else {
            temp->data = arr[i];
            temp->prev = temp2;
        }
    }
    temp=head;
    while (temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    return 0;
}