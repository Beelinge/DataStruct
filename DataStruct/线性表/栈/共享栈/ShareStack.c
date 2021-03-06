//
//  ShareStack.c
//  DataStruct
//
//  Created by Beelin on 17/7/18.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#include "ShareStack.h"
#include <stdlib.h>
Status pushShareStack(ShareStackStr *s, SElemType e, int stackNumber) {
    if (s->top1 + 1 == s->top2) { //栈满
        return ERROR;
    }
    if (stackNumber == 1) {
        s->top1++;
        s->data[s->top1] = e;
    }
    if (stackNumber == 2) {
        s->top2--;
        s->data[s->top2] = e;
    }
    return OK;
}
Status popShareStack(ShareStackStr *s, SElemType *e, int stackNumber) {
    
    if (stackNumber == 1) {
        if (s->top1 == -1) {
            return ERROR;
        }
        *e = s->data[s->top1];
        s->top1--;
    }
    else if (stackNumber == 2) {
        if (s->top2 == MAXSIZE) {
            return ERROR;
        }
        *e = s->data[s->top2];
        s->top2++;
    }
    return OK;
}

void shareStack() {
    ShareStackStr *s = (ShareStackStr *)malloc(sizeof(ShareStackStr));
    s->top1 = -1;
    s->top2 = MAXSIZE;
    SElemType e = 10;
    pushShareStack(s, e, 1);
    pushShareStack(s, e, 1);
     pushShareStack(s, e, 2);
    for (int i = -1; i < s->top1; i ++) {
        printf("top 1 data content : %d, top1 : %d\n", s->data[i + 1], s->top1);
    }
    for (int i = MAXSIZE - 1; i > s->top2; i --) {
        printf("top 2 data content : %d, top2 : %d\n", s->data[i - 1], s->top2);

    }
    
    SElemType *e1 = (SElemType *)malloc(sizeof(SElemType));
    popShareStack(s, e1, 1);
    for (int i = -1; i < s->top1; i ++) {
        printf("top 1 data content : %d, top1 : %d\n", s->data[i + 1], s->top1);
    }
}
