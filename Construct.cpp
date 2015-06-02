/*************************************************************************
	> File Name: Construct.cpp
	> Function: ***绘制电路图函数,在这里声明元器件并声明连接关系
	> Author: LiLele
	> Mail: 309162998@qq.com 
	> Created Time: 2015年05月21日 星期四 15时55分32秒
 ************************************************************************/

#include<iostream>
#include"Construct.h"
using namespace std;

void Construct(int x1, int x2) {
	Wire a, b, c;
	a.in.value = x1;
	b.in.value = x2;
	AndGate(a, b, c);
}

