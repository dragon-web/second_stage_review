//#include"problem1.h"

/*
int main() {
	int *Stack;
	Stack = (int*)calloc(NUM_STACK_SIZE + 1, sizeof(int));

	int i;
	for (i = 2; i < 12; i++)
		Push(Stack, i);

	Push(Stack, 100);
	Push(Stack, 200);

	for (i = 0; i < 10; i++)
		printf("%d \n", Pop(Stack));

	printf("%d \n", Pop(Stack));
	printf("%d \n", Pop(Stack));

	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Dont touch
#include "problem2.h"


int main() {
	int *Queue;
	Queue = (int*)malloc(sizeof(int)*NUM_QUEUE_SIZE);
	head = tail = 0;
	int i;
	for (i = 2; i < 12; i++)
		Enqueue(Queue, i);

	Enqueue(Queue, 100);
	Enqueue(Queue, 200);
	for (i = 0; i < 10; i++)
		printf("%d \n", Dequeue(Queue));

	printf("%d \n", Dequeue(Queue));
	printf("%d \n", Dequeue(Queue));

	Enqueue(Queue, 300);
	Enqueue(Queue, 500);

	printf("%d \n", Dequeue(Queue));
	printf("%d \n", Dequeue(Queue));

	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Dont touch

#define NUM_QUEUE_SIZE 10

int count = 0;
int head = 0, tail = 0;
bool Enqueue(int *Queue, int value);
int Dequeue(int *Queue);
void pererror_function_queue(int error_code);


bool Enqueue(int *Queue, int value) {
	if (head == tail && count == 1) // queue is full 
	{
		pererror_function_queue(0);
		return false;
	}
	{
		Queue[tail] = value;
		tail = (tail + 1) % NUM_QUEUE_SIZE;
		count = 1;
		return true;
	}
}
int Dequeue(int *Queue) {
	if (head == tail && count == 0)
	{
		pererror_function_queue(1);
		return false;
	}
	int num = Queue[head];
	head = (head + 1) % NUM_QUEUE_SIZE;
	count = 0;
	return num;
}
void pererror_function_queue(int error_code) {
	switch (error_code) {
	case 0: printf("Fail to enqueue\n"); break;
	case 1: printf("Fail to dequeue\n"); break;
	default:printf("Non\n"); break;
	}
}



int main() {
	int *Queue;
	Queue = (int*)malloc(sizeof(int)*NUM_QUEUE_SIZE);
	int i;
	for (i = 2; i < 12; i++)
		Enqueue(Queue, i);

	Enqueue(Queue, 100);
	Enqueue(Queue, 200);

	for (i = 0; i < 10; i++)
		printf("%d \n", Dequeue(Queue));

	printf("%d \n", Dequeue(Queue));
	printf("%d \n", Dequeue(Queue));

	Enqueue(Queue, 300);
	Enqueue(Queue, 500);

	printf("%d \n", Dequeue(Queue));
	printf("%d \n", Dequeue(Queue));
	system("pause");
	return 0;
}
*/

#include<stdbool.h>

#include "Single_linked_list.h" //You can use function and node in Single_linked_list.h

node_t *Stack;
int count;
bool Push(node_t *Stack, int value);
int Pop(node_t *Stack);
void pererror_function_stack(int error_code);
























