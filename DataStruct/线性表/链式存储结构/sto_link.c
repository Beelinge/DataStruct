//
//  sto_link.c
//  DataStruct
//
//  Created by Beelin on 2017/2/20.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#include "sto_link.h"
#include <stdlib.h>
typedef int ElemType;
typedef struct Node{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;

#define OK 1
#define ERROR 0
typedef int Status;

Status linkListInsert(LinkList *L, int i, ElemType e){
    int j = 1;
    LinkList p,s;
    p = *L;
    
    while (p && j < i) {
        p = p->next;
        ++j;
    }
    if (!p || j >i) {
        return ERROR;
    }
    s = (LinkList)malloc(sizeof(Node));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}
