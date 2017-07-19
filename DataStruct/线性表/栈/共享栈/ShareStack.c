//
//  ShareStack.c
//  DataStruct
//
//  Created by Beelin on 17/7/18.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#include "ShareStack.h"
Status Push1(ShareStackStr *s, SElemType e, int i) {
    if (i == 1) {
        if (s->top1 == s->top2 - 1) {
            return ERROR;
        }
        s->top1++;
        s->data[s->top1] = e;
        
    }
    if (i == 2) {
        if (s->top2 == s->top1 + 1) {
            return ERROR;
        }
        s->top2--;
        s->data[s->top2] = e;
    }
    return OK;
}
Status Pop1(ShareStackStr *s, SElemType *e, int i) {
    if (s->top1 + 1 == s->top2) {
        return ERROR;
    }
    if (i == 1) {
        *e = s->data[s->top1];
        s->top1--;
    }
    if (i == 2) {
        *e = s->data[s->top2];
        s->top1++;
    }
    return OK;
}

void shareStack() {
    ShareStackStr *s = (ShareStackStr *)malloc(sizeof(ShareStackStr));
    s->top1 = -1;
    s->top2 = MAXSIZE - 1;
    SElemType e = 10;
    Push1(s, e, 1);
    Push1(s, e, 1);
     Push1(s, e, 2);
    for (int i = -1; i < s->top1; i ++) {
        printf("top 1 data content : %d, top1 : %d\n", s->data[i + 1], s->top1);
    }
    for (int i = MAXSIZE - 1; i > s->top2; i --) {
        printf("top 2 data content : %d, top2 : %d\n", s->data[i - 1], s->top2);

    }
    
    SElemType *e1 = (SElemType *)malloc(sizeof(SElemType));
    Pop1(s, e1, 1);
    for (int i = -1; i < s->top1; i ++) {
        printf("top 1 data content : %d, top1 : %d\n", s->data[i + 1], s->top1);
    }
}
