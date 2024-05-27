#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "stack_functions.h"

// Function to print the stacks (rods)
void printStack(struct node* top) {
    struct node* current = top;
    if (current == NULL) {
        printf("Empty");
    } else {
        while (current != NULL) {
            printf("%d ", current->data.disk_size);
            current = current->next;
        }
    }
    printf("\n");
}

// Function to print the state of all rods
void printState(struct node *source, struct node *aux, struct node *dest) {
    printf("Source rod: ");
    printStack(source);
    printf("Auxiliary rod: ");
    printStack(aux);
    printf("Destination rod: ");
    printStack(dest);
    printf("\n");
}

// Function to move a disk from source stack to destination stack
void moveDisk(struct node **source, struct node **destination, char s, char d) {
    struct element disk = pop(source);
    push(destination, disk);
    printf("Move disk %d from %c to %c\n", disk.disk_size, s, d);
}

// Recursive function to solve Towers of Hanoi
void towersOfHanoi(int n, struct node **source, struct node **aux, struct node **dest, char s, char a, char d) {
    if (n == 1) {
        moveDisk(source, dest, s, d);
        printState(*source, *aux, *dest); // Print the state after each move
        printf("Press Enter to continue...\n");
        getchar(); // Wait for user input to proceed
        return;
    }
    towersOfHanoi(n-1 , source, dest, aux, s, d, a);
    moveDisk(source, dest, s, d);
    printState(*source, *aux, *dest); // Print the state after each move
    printf("Press Enter to continue...\n");
    getchar(); // Wait for user input to proceed
    towersOfHanoi(n - 1, aux, source, dest, a, s, d);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);  // Prompt user to enter the number of disks
    getchar(); // Consume newline character left by scanf

    // Initialize the stacks (rods)
    struct node *source = NULL;
    struct node *aux = NULL;
    struct node *dest = NULL;

    // Initialize source rod with disks
    for (int i = n; i >= 1; i--) {
        struct element disk;
        disk.disk_size = i;
        push(&source, disk);
    }

    // Print initial state
    printf("Initial state:\n");
    printState(source, aux, dest);

    // Solve the Towers of Hanoi
    towersOfHanoi(n, &source, &aux, &dest, 'A', 'B', 'C');

    // Print final state
    printf("Final state:\n");
    printState(source, aux, dest);

    // Congratulatory message
    printf("Congratulations! All disks have been moved to the destination rod.\n");

    return 0;
}
