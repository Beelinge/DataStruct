//
//  LinkStack.h
//  DataStruct
//
//  Created by beelin on 2017/7/19.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#ifndef LinkStack_h
#define LinkStack_h

#include <stdio.h>
#include "Listh.h"

typedef int SElemType;

typedef struct StackNode{
    SElemType data;
    struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef struct LinkStack {
    LinkStackPtr top;
    int count;
}LinkStack;

#endif /* LinkStack_h */
