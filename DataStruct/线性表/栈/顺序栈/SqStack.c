//
//  SqStack.c
//  DataStruct
//
//  Created by beelin on 2017/7/17.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#include "SqStack.h"


Status Push(SqStackStr *s, SElemType e) {
    if (s->top == MAXSIZE - 1) {
        return ERROR;
    }
    s->top++;
    s->Data[s->top] = e;
    return OK;
}

Status Pop(SqStackStr *s, SElemType *e) {
    if (s->top == -1) {
        return ERROR;
    }
    *e = s->Data[s->top];
    s->top--;
    return OK;
}
