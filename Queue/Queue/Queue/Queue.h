#pragma once
//保留一个空位置存放队头指针,此时最大存放数目是MAXSIZE-1
#define MAXSIZE 6
typedef struct queue {
	int data[MAXSIZE];
	int front=0, rear=0;
}Queue;
		
bool IsEmpty(Queue *q);		//通过判断rear和front是否相等来判断空

bool IsFull(Queue* q);		//通过判断队尾指针循环递增1时等于队首来判读满

bool Push(Queue* q, int num);//保留一个空位置存放队头指针,此时最大存放数目是MAXSIZE-1
bool Pop(Queue* q,int *x);