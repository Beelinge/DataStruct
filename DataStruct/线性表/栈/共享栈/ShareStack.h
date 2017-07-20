//
//  ShareStack.h
//  DataStruct
//
//  Created by Beelin on 17/7/18.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#ifndef ShareStack_h
#define ShareStack_h

#include <stdio.h>
#include "Listh.h"

typedef int SElemType;

typedef struct {
    SElemType data[MAXSIZE];
    int top1;
    int top2;
}ShareStackStr;

Status Push1(ShareStackStr *s, SElemType e, int i);
Status Pop1(ShareStackStr *s, SElemType *e, int i);

void shareStack();
#endif /* ShareStack_h */
