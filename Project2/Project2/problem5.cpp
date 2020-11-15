#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct node {
	int val;
	struct node *next;
} node_t;

node_t *head;

bool insert(node_t *head, int X);
bool Delete(node_t *head, int X);
bool find(node_t *head, int X);
int findkth(node_t *head, int index);
void printlist(node_t *head);
bool isEmpty(node_t *head);
bool makeEmpty(node_t *head);

void pererror_function(int error_code) {
	switch (error_code) {
	case 0: printf("Fail to insert node\n"); break;
	case 1: printf("Fail to delete node\n"); break;
	case 2: printf("Fail to searching node\n"); break;
	case 3: printf("Fail to search k-th node\n"); break;
	case 4: printf("Fail to delete all the  node\n"); break;
	default: printf("Unexpected exception\n"); break;
	}
}
bool makeEmpty(node_t *head) {
	int error_code;
	node_t *iter;
	node_t *victim;
	if (head == NULL || head->next == NULL) {
		error_code = 4;
		pererror_function(error_code);
		return false;
	}
	else {
		iter = head->next;
		while (iter != NULL) {
			victim = iter;
			iter = iter->next;
			free(victim);
		}
		head->next = NULL;
		free(head);
		head = NULL;
		return true;
	}
}
int findkth(node_t *head, int index) {
	int error_code;
	int number = 0;
	bool exist = false;
	node_t *iter;

	if (head == NULL || head->next == NULL) {
		error_code = 3;
		pererror_function(error_code);
		return 0;
	}
	else {
		iter = head->next;
		while (iter != NULL) {
			if (number == index) {
				exist = true;
				break;
			}
			iter = iter->next;
			number++;
		}
		if (exist == true)
			return iter->val;
		else {
			error_code = 3;
			pererror_function(error_code);
			return 0;
		}
	}
}
bool isEmpty(node_t *head) {
	if (head == NULL || head->next == NULL)
		return true;
	else
		return false;
}
bool Delete(node_t *head, int X) {
	node_t *iter;
	node_t *victim;
	node_t *prev;
	int error_code;
	if (find(head, X) == false) {
		error_code = 1;
		pererror_function(error_code);
		return false;
	}
	else {
		prev = iter = head;
		victim = head;
		while (iter != NULL) {
			prev = iter;
			victim = iter->next;
			if (victim->val == X)
				break;
			iter = iter->next;
		}
		prev->next = victim->next;
		free(victim);
		return true;
	}
}
bool find(node_t *head, int X) {
	int error_code;
	bool exist = false;
	node_t *iter;
	if (head->next == NULL || head == NULL) {
		error_code = 2;
		pererror_function(error_code);
		return exist;
	}
	else {
		iter = head->next;
		while (iter != NULL) {
			if (iter->val == X) {
				exist = true;
				return exist;
			}
			iter = iter->next;
		}
		error_code = 2;
		pererror_function(error_code);
		return exist;
	}
}
void printlist(node_t *head) {
	node_t *iter;
	printf("Print List\t:\t");
	if (head == NULL || head->next == NULL) {
		printf("empty\n");
		return;
	}
	else {
		iter = head->next;
		while (iter != NULL) {
			printf("%d\t", iter->val);
			iter = iter->next;
		}
		printf("\n");
		return;
	}
}
bool insert(node_t *head, int X) {
	int error_code;
	node_t *New = (node_t*)malloc(sizeof(node_t));
	if (New == NULL) { //Fail to insert
		error_code = 0;
		pererror_function(error_code);
		return false;
	}
	else {
		New->next = head->next;
		head->next = New;
		New->val = X;
	}
	return true;
}


typedef struct node_Q {
	node_t *head; //node_t -> node in Single_linked_list.h
	node_t *tail;
	int count;
} node_q;
node_q *Queue;
bool Enqueue(node_q *Queue, int value);
int Dequeue(node_q *Queue);
void pererror_function_queue(int error_code);


bool Enqueue(node_q* Queue, int value) {

	node_t *p = (node_t*)malloc(sizeof(node_t));
	if (p == NULL)
	{
		pererror_function_queue(0);
		return false;
	}
	p->val = value;
	p->next = NULL;
	if (Queue->head == NULL)
	{
		Queue->head = p;
		Queue->tail = p;
	}
	else
	{
		Queue->tail->next = p;
		Queue->tail = p;
	}
	Queue->count++;
	return true;
}

int Dequeue(node_q* Queue) {
	if ((Queue->count) == 0)
	{
		pererror_function_queue(1);
		return -1;
	}
	node_t *temp = Queue->head;
	int num = temp->val;
	Queue->head = Queue->head->next;
	free(temp);
	Queue->count--;
	return num;
}

void pererror_function_queue(int error_code) {
	switch (error_code) {
	case 0: printf("Failt to enqueueu\n"); break;
	case 1: printf("Failt to dequeueu\n"); break;
	default: printf("non");
	}
}




int main() {
	int i;
	Queue = (node_q*)malloc(sizeof(node_q));
	Queue->count = 0;
	Queue->head = NULL;
	Queue->tail = NULL;

	for (i = 2; i < 12; i++)
		Enqueue(Queue, i);

	Enqueue(Queue, 100);
	Enqueue(Queue, 200);

	for (i = 0; i < 10; i++)
		printf("%d\n ", Dequeue(Queue));

	printf("%d\n ", Dequeue(Queue));
	printf("%d\n ", Dequeue(Queue));
	printf("%d\n ", Dequeue(Queue));

	Enqueue(Queue, 300);
	Enqueue(Queue, 500);

	printf("%d\n ", Dequeue(Queue));
	printf("%d\n ", Dequeue(Queue));

	system("pause");
	return 0;
}
