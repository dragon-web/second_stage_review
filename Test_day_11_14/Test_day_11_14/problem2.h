#pragma once
#include<stdbool.h>

#include "array.h" //You can use function in Array.h

#define NUM_QUEUE_SIZE 10

 int head = 0;//= 0;
 int tail = 0;// = 0;

bool Enqueue(int *Queue, int value);
int Dequeue(int *Queue);
void pererror_function_queue(int error_code);

