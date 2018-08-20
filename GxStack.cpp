//
// Created by 12736 on 2018/8/20.
//

#include <iostream>
#include "GxStack.h"
#include <bits.h>

using namespace std;

void InitGxStack(GxStack &s) {
    s.top[0] = -1;
    s.top[1] = gxmaxsize;
}

bool GxPush(GxStack &s, int i, int x) {//i为栈号，便表示左边的栈还是右边的栈
    if (i < 0 || i > 1) {
        cout << "栈号输入不对" << endl;
        return false;
    }
    if (s.top[1] - s.top[0] == 1) {
        cout << "栈已满" << endl;
        return false;
    }
    switch (i) {
        case 0:
            s.data[++s.top[0]] = x;
            return true;
        case 1:
            s.data[--s.top[1]] = x;
            return false;
        default:
            return false;
    }
}

int GxPop(GxStack &s,int i)
{
    int x;
    if(i<0||i>1){
        cout << "栈号输入不对" << endl;
        exit(0);
    }
    switch (i) {
        case 0:
            if(s.top[0]==-1){
                cout<<"栈为空"<<endl;
                return -1;
            } else {
                x=s.data[s.top[0]--];
                return x;
            }
        case 1:
            if(s.top[2]==gxmaxsize){
                cout<<"栈为空"<<endl;
                return -1;
            } else {
                x=s.data[s.top[1]++];
                return x;
            }
        default:
            return 0;
    }

}

