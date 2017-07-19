//
//  LinkStack.c
//  DataStruct
//
//  Created by beelin on 2017/7/19.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#include "LinkStack.h"
#include <stdlib.h>

Status pushLinkStack(LinkStack *ls, SElemType e) {
    LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
    s->data = e;
    s->next = ls->top;
    ls->top = s;
    ls->count++;
    
    return OK;
}

Status popLinkStack(LinkStack *ls, SElemType *e) {
    if (ls->count == -1) {
        return ERROR;
    }
    LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
    
    LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
    *e = ls->top->data;
    p = ls->top;
    ls->top = s->next;
    ls->count--;
    free(p);
    return OK;
}
