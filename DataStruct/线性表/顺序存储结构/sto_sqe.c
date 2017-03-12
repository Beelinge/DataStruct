//
//  sto_sqe.c
//  DataStruct
//
//  Created by Beelin on 2017/2/19.
//  Copyright © 2017年 Beelin. All rights reserved.
//

#include "sto_sqe.h"
#include <string.h>

#define MAXSIZE 20
typedef int ElemType;
typedef struct{
    ElemType data[MAXSIZE];
    int length; //线性表当前长度
}SqList;

//获得元素操作

Status GetElem(SqList L, int i, ElemType *e){
    if (L.length == 0 || i < 1 || i > L.length) {
        return ERROR;
    }else{
        *e = L.data[i-1];
        return OK;
    }
}

//打印
void mylog(SqList *L){
    for (int i = 0; i < L->length; i ++) {
        printf("ele: %d\n",L->data[i]);
    }
    printf("num: %d\n", L->length);
}

//插入元素
Status ListInsert(SqList *L, int i, ElemType e){
    int k;
    if (L->length == MAXSIZE) {
        return ERROR;
    }
    if (i < 1 || i > L->length + 1) {
        return ERROR;
    }
    if (i <= L->length) {
        for (k = L->length - 1 ; k >= i - 1; k--) {
            L->data[k+1] = L->data[k];
        }
    }
    L->data[i-1] = e;
    L->length++;
    return OK;
}

//删除元素
Status ListDelete(SqList *L, int i, ElemType *e){
    int k;
    if (i < 1 || i > L->length) {
        return ERROR;
    }
    *e = L->data[i-1];
    if (i < L->length) {
        for (k = i ; k < L->length; k++) {
            L->data[k-1] = L->data[k];
        }
    }
    L->length--;
    return OK;
}

//实现
void action(){
    ElemType e = 3;
    
    SqList *L = (SqList *)malloc(sizeof(SqList));
    L->length = 10;
    
    int temp[10] = {1,2,3,4,5,6,7,8,9,0};
    memcpy(L->data, temp, 10*sizeof(int));
    
    ListInsert(L, 5, e);
    mylog(L);
    
    ListDelete(L, 5, &e);
    mylog(L);
    
}






