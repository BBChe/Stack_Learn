#include <iostream>
#include "GxStack.h"
#include <bits/stdc++.h>
using namespace std;

const int maxsize=200;

typedef struct Stack{
    int *data;
    int top;
    int maxsize;
}SqStack;

void InitStack(SqStack &s,int n)
{
    s.data=new int[n];
    s.top=-1;
    s.maxsize=n;
}

bool StackEmpty(SqStack s)
{
    if(s.top==-1)
        return true;
    else
        return false;
}

bool Push(SqStack &s,int x)
{
    if(s.top==s.maxsize-1)
        return false;
    s.data[++s.top]=x;//先指针加一，再入栈
    return true;
}

bool Pop(SqStack &s,int &x)
{
    if(s.top==-1)
        return false;
    x=s.data[s.top--];//先出栈，再指针减一
    return true;
}

bool GetTop(SqStack s,int &x)
{
    if(s.top==-1)
        return false;
    x=s.data[s.top];
    return true;
}

//P64T3(2) 判断操作是否合法，要求栈开始和结束都是空
bool Three_Problem(string str)
{
    int p=0;//下标
    int i=0,o=0;//i和o的个数
    while(str[p]!='\0')
    {
        if(str[p] == 'I')
            i++;
        else if(str[p] == 'O')
            o++;
        if(o>i){
            cout<<"序列非法"<<endl;
            return false;
        }
        p++;
    }
    if(i!=o)
    {
        cout<<"序列非法不为空"<<endl;
        return false;
    }
    else
    {
        cout<<"序列合法"<<endl;
        return false;
    }

}

int main() {

//    //第三题调用
//    cout<<"请输入IO序列"<<endl;
//    string str;
//    cin>>str;
//    Three_Problem(str);

//第五题共享栈调用
    GxStack gstk;
    InitGxStack(gstk);
    GxPush(gstk,1,200);
    cout<<gstk.data[19]<<endl;
    GxPush(gstk,0,100);
    cout<<gstk.data[0]<<endl;
    cout<<GxPop(gstk,0)<<endl;
    cout<<gstk.top[0]<<endl;

    return 0;
}