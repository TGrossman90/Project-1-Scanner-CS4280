#ifndef STACK_H
#define STACK_H

#include <deque>
#include "scanner.h"
#include "node.h"

typedef struct Stack {
	string tknWord;
	int lineNum;
	int scope;
}stack;

extern stack theStack[];
extern deque<stack> theRealStack;

void pushToRealStack(stack, FILE*);
void popFromRealStack(int, FILE*, int &);
int find(stack);
int searchRealStack(stack);

int checkExists(stack);
int checkExistsScope(stack);
int getPreviousDeclaration(stack);
int searchStack(stack);
void push(stack);
void pop(int, FILE*, int &);
void pop(FILE*, int &);
void printStack();
void reorganizeStack();

#endif 