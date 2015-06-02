/*************************************************************************
	> File Name: Wire.cpp
	> Function: 导线定义函数
	> Author: LiLele
	> Mail: 309162998@qq.com 
	> Created Time: 2015年05月19日 星期二 15时25分28秒
 ************************************************************************/

#include<iostream>
#include"Wire.h"
using namespace std;

void Wire::setValue(int value, bool isPar) {
	this->value = value;
	if(!isPar)
		this->out.trigger(isPar);
}
