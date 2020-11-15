#pragma once

#include<stdbool.h>

#include "array.h" //you can use function in Array.h

#define NUM_QUEUE_SIZE 10

int count = 0;
int head = 0, tail = 0;
bool Enqueue(int *Queue, int value);
int Dequeue(int *Queue);
void pererror_function_queue(int error_code);
