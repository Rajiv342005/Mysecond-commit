#include<iostream>
using namespace  std;
struct Node {
    int coefficient;
    int power;
    Node* next;
    Node(int coeff,int pow) {
        this->coefficient = coeff;
        this->power = pow;
        this->next = nullptr;
    }
};
void append(Node*&head,int coeff,int pow) {
    Node*newNode = new Node(coeff,pow);
    if (head==nullptr) {
        head = newNode;
        return;
    }
    Node*temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void display(Node*&head) {
    if (head==nullptr) {
        cout<<"EmptyList"<<endl;
        return;
    }
    Node*temp = head;
    while (temp) {
        cout<<temp->coefficient<<"x^"<<temp->power;
        if (temp->next) {
            cout<<" + ";
        }
        temp = temp->next;
    }
}
int main() {
    Node *poly = nullptr;
    append(poly,1,3);
    append(poly,2,2);
    append(poly,3,1);
    append(poly,7,0);
    cout<<"Polynomial Linked List: ";
    display(poly);
    return 0;
}