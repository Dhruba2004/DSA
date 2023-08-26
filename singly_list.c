#include<stdlib.h>
#include<stdio.h>
struct Node {
    int data;
    struct Node*next;
};
struct Node*head;
void insert_AtBegin (int x){

struct Node*temp=( struct Node*)malloc(sizeof(struct Node));
        temp->data=x;
        temp->next=NULL;
        if(head!=NULL)
            temp->next=head;
       
        head=temp;


}
void Print(){
    struct Node* temp = head;
    printf("List is : ");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");

}
void insert_AtEnd(){
    struct Node*temp,*p;
    int n;
    printf("\nEnter data");
    scanf("%d",&n);
    struct Node*temp = (struct node*)malloc(sizeof(node));
    temp->data=n;
    temp->next=NULL;
    p=head;
    while(p->next!=NULL)
    p=p->next;
    p->next=newnode;
}

void insert_any(){
    struct node*temp,*p;
    int m,n;
    printf("Enter data and number after which you want to insert");
    scanf("%d%d",&m,&n);
    struct node*temp=(struct node*)malloc(sizeof(node));
    temp->data=n;
    p=head;
    while(p!=NULL)
    {
        if(p->data==m)
        {
            q=p->link;
            p->link=newnode;
            newnode->link=q;
            p=p->link;
        }
    }

}
void delete_beg(){
    struct node*p;
    if(start==NULL)
    printf("\n No list");
    else 
    {
        p=head;
        head=head->next;
        free(p);
    }
}
void delete_end(){
    struct node*p,*q;
    p=start;
    q=p;
    while(p->next!=NULL){
        q=p;
        p=p->next;
        q->next=NULL;
        free(p);
    }
}
void delete_any(){
    struct node*p,*q;
    int n;
    printf("\n Enter the node value you want to delete");
    scanf("%d",&n);
    p=head;
    q=p;
    while(p->data!=n){
        q=p;
        p=p->next;
        q->next=p->next;
        free(p);
    }
}
void reverse (){
    struct node*p,*q,*t;
    p=NULL;
    q=head;
    r=NULL;
    while(q!=NULL){
        t=q->link;
        q->link=p;
        p=q;
        q=t;
    }
    head=p;
}
struct Node*head;
int main (){
    head=NULL;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter the number\n");
        scanf("%d",&x);
        Insert_AtBegin(x);
        Print();
    }
}