#define _CRT_SECURE_NO_WARNINGS 
#pragma once

#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
//Parameter
#define MAX_SIZE 100

//int *List;

//Function prototype
bool insert(int *L, int X);
bool Delete(int *L, int X);
bool   find(int *L, int X);
int  findkth(int *L, int X);
void printlist(int *L);
bool isEmpty(int *L);
bool makeEmpty(int *L);
