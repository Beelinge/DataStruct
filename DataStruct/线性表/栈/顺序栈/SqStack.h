//
//  SqStack.h
//  DataStruct
//
//  Created by beelin on 2017/7/17.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#ifndef SqStack_h
#define SqStack_h

#include <stdio.h>
#include "Listh.h"

typedef int SElemType;

typedef struct {
    SElemType Data[MAXSIZE];
    int top;
}SqStackStr;

Status Push(SqStackStr *s, SElemType e);
Status Pop(SqStackStr *s, SElemType *e);

#endif /* SqStack_h */
