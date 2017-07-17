//
//  main.c
//  DataStruct
//
//  Created by Beelin on 2017/2/19.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#include <stdio.h>

#include "sto_sqe.h"

#include "SqStack.h"

int main(int argc, const char * argv[]) {
    
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
    return 0;
}
