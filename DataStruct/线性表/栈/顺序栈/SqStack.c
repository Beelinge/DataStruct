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

void sqStackAction() {
    SqStackStr *s = (SqStackStr *)malloc(sizeof(SqStackStr));
    for (int i = 0; i < 20; i ++) {
        printf("top value is %d\n", s->top);
        Push(s, i);
        printf("e %d\n",s->Data[s->top]);
        
    }
    //    SElemType *e = (int *)malloc(sizeof(int));
    //    Pop(s, e);
    //    printf("top %d\n",s->Data[s->top]);
    //    printf("pop e value is %d\n", *e);
}
