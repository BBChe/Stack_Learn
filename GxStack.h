//
// Created by 12736 on 2018/8/20.
//

#ifndef STACK_LEARN_GXSTACK_H
#define STACK_LEARN_GXSTACK_H


const int gxmaxsize = 20;
typedef struct {
    int data[gxmaxsize];
    int top[2];
} GxStack;


void InitGxStack(GxStack &s);
bool GxPush(GxStack &s, int i, int x);
int GxPop(GxStack &s,int i);



#endif //STACK_LEARN_GXSTACK_H
