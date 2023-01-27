#include <bits/stdc++.h>
#define CAPCITY 5
int stacck[CAPCITY];
int top=-1;
using namespace std;
//insert element
int push(int item){
    if(top<CAPCITY-1){
        top=top+1;
        stacck[top]=item;
        printf("Succesfully Added Item %d\n",item);
    } else printf("The Stack is Full\n");

}
//delete element
int pop(){
    if(top>=0){
        int value=stacck[top];
        top=top-1;
        printf("The Top Value is %d\n",value);
    } else printf("The Stack is Empty\n");
    return -1;
}
//show the top value
int peek(){
    if(top>=0){

        printf("The Peek Value is %d\n",stacck[top]);
    } else printf("The Stack is Empty\n");
    return -1;
}


int main(){
    push(5);
    push(10);
    push(15);
    peek();
    pop();
    peek();
    push(26);
    push(32);
    push(65);
}
