#include <stdio.h>

int queue[100],front=-1,rear=-1;

int displayMenu(){
    int ch;
    printf("Enter a choice\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display Queue\n");
    printf("4. Exit\n");
    scanf("%d",&ch);
    return ch;
}
void Enqueue(){
    int item;
    if(rear==-1){
        front=rear=0;
    }else if(rear==99){
        printf("Queue OVERFLOW\n");
        return;
        }else{
        rear = rear+1;
    }
     printf("Enter element\n");
        scanf("%d",&item);
        queue[rear] = item;
}
void Dequeue(){
    if(front==-1){
        printf("Queue UNDERFLOW\n");
        return;
    }else{
        printf("%d deleted successfully\n",queue[front]);
        front = front + 1;
    }
}
void displayQueue(){
    int i;
    if(rear==-1||front>rear){
        printf("Queue UNDERFLOW\n");
    }else{
        printf("Queue =>\t");
        for(i=front;i<=rear;i++){
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}

int main()
{
while(1){
    int ch = displayMenu();
    switch(ch){
        case 1: Enqueue();
        break;
        case 2: Dequeue();
        break;
        case 3: displayQueue();
        break;
        case 4: printf("\nEXIT\n");
        return 0;
        break;
        default: printf("Wrong Input.... Try Again\n");
        break;
    }
}
}
