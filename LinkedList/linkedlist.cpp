#include <bits/stdc++.h>
using namespace std;



struct node{
    int data;
    struct node* link;
};

struct node* head;

void print_linkedlist(){

    struct node* temp;
    temp=head;

    while (temp != NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    
    printf("\n");

}

void insert_node_first(int value){

    struct node* insert=(struct node*) malloc(sizeof(struct node));
    insert->data=value;
    insert->link=head;

    head=insert;

}

void insert_node_end(int value){

    struct node* insert=(struct node*) malloc(sizeof(struct node));
    insert->data=value;
    insert->link=NULL;

    if (head==NULL){
        head=insert;

    } else{
        struct node* temp;
        temp=head;
        while (temp->link != NULL){
            temp=temp->link;
        }

        temp->link =insert;
    }

}

void remove_node(int position){

    if(position==1){
        struct node* temp;
        temp=head;
        head=head->link;
        free(temp);

    } else{
        struct node* temp1;
        temp1=head;

        for (int i = 1; i < position-2; ++i) {
            temp1=temp1->link;
        }

        struct node* temp2;
        temp2=temp1->link;
        temp1->link=temp2->link;
        free(temp2);

    }
}


int main(){

    head=NULL;

    //insert value at the end
    insert_node_end(3);
    insert_node_end(4);

    //insert value at the first
    insert_node_first(2);
    insert_node_first(1);

    //print the linkedlist
    print_linkedlist();

    //remove the node
    remove_node(2);
    print_linkedlist();
    remove_node(1);
    print_linkedlist();


    return 0;
    
}
