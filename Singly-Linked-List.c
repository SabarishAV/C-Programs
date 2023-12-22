#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
} *first=NULL,*pos,*cur,*temp;

int displayMenu(){
    printf("\nEnter a choice\n");
    printf("1. Insert First\n");
    printf("2. Insert Last\n");
    printf("3. Insert at Position\n");
    printf("4. Delete First\n");
    printf("5. Delete Last\n");
    printf("6. Delete at Position\n");
    printf("7. Display List\n");
    printf("8. Exit\n\n");
    int ch;
    printf("Choice:\t");
    scanf("%d",&ch);
    return ch;
}
void InsertFirst(){
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data\t");
    scanf("%d",&temp->data);
    if(first==NULL){
        first = temp;
        first->link=NULL;
    }else{
        temp->link=first;
        first = temp;
    }
}
void InsertLast(){
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data\t");
    scanf("%d",&temp->data);
    if(first==NULL){
        first = temp;
        first->link=NULL;
    }else{
        cur = first;
        while(cur->link!=NULL){
            cur = cur->link;
        }
        cur->link = temp;
        temp->link = NULL;
    }
}
void InsertAtPosition(){
    if(first==NULL){
        first = (struct node*)malloc(sizeof(struct node));
        printf("Enter data\t");
        scanf("%d",&first->data);
        first->link=NULL;
    }else{
        int val;
    printf("Enter the value at position\t");
    scanf("%d",&val);
    cur = first;
    while(cur!=NULL){
        if(cur->data==val){
            temp = (struct node*)malloc(sizeof(struct node));
            pos = cur->link;
            printf("Enter data\t");
            scanf("%d",&temp->data);
            cur->link = temp;
            temp->link = pos;
            break;
        }else{
            cur = cur->link;
        }
    }
    if(cur==NULL){
            printf("Value not found\n");
        }
    }
}
void DeleteFirst(){
    if(first==NULL){
        printf("List is empty. Deletion not possible\n");
    }else{
        printf("%d deleted successfully\n",first->data);
        temp = first;
        first = first->link;
        free(temp);
    }
}
void DeleteLast(){
    if(first==NULL){
        printf("List is empty. Deletion not possible\n");
    }else if(first->link==NULL){
        printf("%d deleted successfully\n",first->data);
        first=NULL;
        free(first);
    }else{
        cur = first;
        while(cur->link->link!=NULL){
            cur = cur->link;
        }
        temp = cur->link;
        cur->link=NULL;
        printf("%d deleted successfuly\n",temp->data);
        free(temp);
    }
}
void DeleteAtPosition(){
    if(first==NULL){
        printf("List is empty. Deletion not possible\n");
    }else{
        cur = first;
        int val;
        printf("Enter the value at position\t");
        scanf("%d",&val);
        if(first->data==val){
            printf("%d deleted successfully\n",first->data);
            if(first->link==NULL){
                first=NULL;
            }else{
                first=first->link;
            }
        }else{
            temp = cur->link;
            while(temp!=NULL){
            if(temp->data==val){
                pos = temp->link;
                cur->link=pos;
                printf("%d deleted successfully\n",temp->data);
                free(temp);
                break;
            }else{
                cur=temp;
                temp=temp->link;
            }

            if(temp==NULL){
                printf("%d not found\n",val);
            }
        }
        }
    }
}
void DisplayList(){
    if(first==NULL){
        printf("List is empty\n");
    }else{
        cur = first;
        printf("List =>\t");
        while(cur!=NULL){
            printf("%d\t",cur->data);
            cur = cur->link;
        }
    }
}

void main(){
    while(1){
        int ch = displayMenu();
        switch(ch){
            case 1:InsertFirst();
            break;
            case 2:InsertLast();
            break;
            case 3:InsertAtPosition();
            break;
            case 4:DeleteFirst();
            break;
            case 5:DeleteLast();
            break;
            case 6:DeleteAtPosition();
            break;
            case 7:DisplayList();
            break;
            case 8: printf("EXIT\n");
            return 0;
            break;
            default: printf("Wrong input. Try again\n");
        }
    }
}