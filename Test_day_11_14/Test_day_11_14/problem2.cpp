#pragma once
#include "problem2.h"

//Don't touch


//Implement Function in header file
bool Enqueue(int *Queue, int value) {
	if (tail >= NUM_QUEUE_SIZE)
	{
		pererror_function_queue(0); // queue is full 
		return false;
	}
	else
	{
		Queue[tail++] = value;
		return true;
	}
}
int Dequeue(int *Queue) {
	if (tail == 0)
	{
		pererror_function_queue(1);
		return false;  // queue is empty
	}
	else
	{
		int num = Queue[head];
		for (int i = head; i < tail - 1; ++i)
		{
			Queue[i] = Queue[i + 1];
		}
		tail--;
		return num;
	}
}
void pererror_function_queue(int error_code) {
	switch (error_code) {
	case 0: printf("Fail to Enqueue\n"); break;
	case 1: printf("Fail to Dequeue\n"); break;
	default: printf("Not defined\n"); break;
	}
}
