
#include <stdio.h>
#include <stdlib.h>
int count=0;
struct node{
    int num;
    struct node *next;
}*head;//=head;
void createnodes(int n);
void displaylist();
void rotateright(int k);
int main()
{
    int n,ch,k;
    printf("\nenter the number of nodes ");
    scanf("%d",&n);
    createnodes(n);
    printf("\nthe nodes are:\n");
    displaylist();
    printf("\nenter value for k:");
    scanf("%d",&k);
    rotateright(k);
    displaylist();
    return 0;
}
void createnodes(int n){
    struct node *fnnode,*temp;
    int num;
    head=(struct head *)malloc(sizeof(struct node));
    printf("\nenter data for node 1");
    scanf("%d",&num);
    head->num=num;
    head->next=NULL;
    temp=head;
    count++;
    for(int i=1;i<n;i++)
    {
        fnnode=(struct head *)malloc(sizeof(struct node));
        printf(" Input data for node %d : ", i+1);
        scanf(" %d", &num);
        fnnode->num=num;
        fnnode->next=NULL;
        temp->next=fnnode;
        temp=temp->next;
        count++;
    }
}
void displaylist(){
    printf("\n");
    if(head==NULL)
    printf("\nempty");
    else{
    struct node *temp;
    temp = head;
    while(temp!=NULL)
    {
    printf("|%d",temp->num);
    temp=temp->next;
    }
    }    
}
void rotateright(int k){
    struct node *temp,*temp2,*start;
    temp = head;
    while(k!=0){
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp2=temp->next;
        temp2->next=head;
        head=temp2;
        temp->next=NULL;
        k--;
        temp=head;
        temp2=head;
    }
}
