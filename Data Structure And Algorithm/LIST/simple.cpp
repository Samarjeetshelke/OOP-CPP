#include<iostream>
#include<stdlib.h>
using namespace std;



typedef struct node{
    int data;
    struct node * next;
}node;

node * head=NULL;
node * endx=NULL;

node * createnode(int x){
    node *s= (node*)malloc(sizeof(node));
    s->data=x;
    s->next=NULL;
}

 
void insertend(int x){
    node * z;
    node * s=createnode(x);
    if(head==NULL){
        head=s;
        endx=s;
    }
    else{
        z=head;

        while(z->next!=NULL){
            z=z->next;
        }
        z->next=s;
        endx=s;
        
    }
    cout<<"\nThe data is inserted!";
}


void insertbg(int x){
    node *s=createnode(x);
    node *z;

    if(head==NULL){
        head=s;
        endx=s;
    }
    else{
        s->next=head;
        head=s;
    }
    cout<<"\nThe data is inserted!";
}


void insertpos(int x,int pos){
    int i=0;
    node * s=head;

    if(pos==0){
        insertbg(x);
        return;
    }
    else{
        node * n=createnode(x);
        while(i<pos-1){
            s=s->next;
            /*if(s==NULL){
                break;
            }*/
            i++;
        }
        n->next=s->next;
        s->next=n;
    }
    cout<<"\nThe data is Inserted!";
}

void display(){
    cout<<"\nDisplaying data: \n";
    if(head==NULL){
        cout<<"\nThe list is empty!";
    }
    else{
        node * s=head;
        while(s!=NULL){
            cout<<"\n"<<s->data;
            s=s->next;
        }
    }
    
}

main(){
   /* insertbg(0);
    display();
    insertbg(1);
    insertbg(2);
    insertbg(3);
    display();
    insertend(10);
    display();
    */

   insertpos(0,0);
   cout<<"\nDone";
   insertpos(1,1);
   cout<<"\nDone";
   insertpos(2,2);
   cout<<"\nDone";
   display();
   insertpos(5,1);
   display();
   
}
