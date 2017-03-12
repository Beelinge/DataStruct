//
//  stack.c
//  DataStruct
//
//  Created by Beelin on 2017/2/27.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#include "stack.h"

#define MAXSIZE 5
typedef int SElemType;
typedef struct {
    SElemType data[MAXSIZE];
    int top;
}SqStack;

/*插入新元素*/
Status Push(SqStack *s, SElemType e){
    if (s->top == MAXSIZE - 1) {
        return ERROR;
    }
    s->top ++;
    s->data[s->top] = e;
    return OK;
}

Status Pop(SqStack *s, SElemType *e){
    if (s->top == -1) {
        return ERROR;
    }
    *e = s->data[s->top];
    s->top --;
    return OK;
}
