#include <stdio.h.
#include <stdlib.h>
struct Node
{
int data;
struct Node* next;
};
struct Node* next;
};
struct Node* top = NULL;
int isEmpty()
{
return top(int value)
{
struct Node* newNode = (struct Node8) malloc(sizeof(struct Node));
if(newNode == NULL)
{
printf("Stack Overflow! Cannot push %d.\n", value);
return;
}
newNode->data=value;
newNode->next=top;
top=newNode;
printf("%d pushed to stack.\n",value);
}
void pop()
{
if(isEmpty())
{
printf("Stack Underflow! The stack is empty.\n");
return;
}
struct Node* temp = top;
printf("Popped element:5d\n");
else
printf("Top element is: %d\n", top->data);
}
void display()
{
if(isEmpty())
{
printf("Stack is empty.\n");
return;
}
struct Node* temp = top;
printf("Stack elements(Top to bottom):");
while(temp != Null\n");
}
int main()
{
int choice, value;
printf("---Stack Operations Using Linked LIst---\n");
while(1)
{
printf("\n1.Push\n2.Pop\n3.Peek\n4. Display\n5. Exit\n");
printf("Enter your choice:");
scanf(
