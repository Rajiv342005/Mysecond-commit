#include<iostream>
using namespace std;
int main() {
    struct node {
        int data;
        node *next;
    };
    int arr[6] = {4,6,7,9,5,10};
    node *head = new node();
    node *temp = head;
    for (int i=0;i<6;i++) {
        temp->data = arr[i];
        temp->next = new node();
        temp = temp->next;
    }
    while (head->next) {
        cout<<head->data<<" ";
        head = head->next;
    }

}