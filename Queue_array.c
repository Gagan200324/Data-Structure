#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

int main() {
    int choice, value;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rear == MAX - 1) {
                    printf("Queue Overflow\n");
                } else {
                    printf("Enter the value to enqueue: ");
                    scanf("%d", &value);
                    if (front == -1) front = 0; 
                    queue[++rear] = value;
                    printf("%d enqueued successfully.\n", value);
                }
                break;

            case 2:
               if (front == -1 || front > rear) {
                    printf("Queue Underflow\n");
                } else {
                    printf("Dequeued value: %d\n", queue[front++]);
                    if (front > rear) front = rear = -1; 
                }
                break;

            case 3:
                if (front == -1 || front > rear) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue elements: ");
                    for (int i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
