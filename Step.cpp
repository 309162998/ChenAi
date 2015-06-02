/*************************************************************************
	> File Name: Step.cpp
	> Function: ***每个时间片内的行为
	> Author: LiLele
	> Mail: 309162998@qq.com 
	> Created Time: 2015年05月21日 星期四 16时26分35秒
 ************************************************************************/

#include<iostream>
#include"Step.h"
using namespace std;
void Step() {
	bool isPar;
	int t;//time
	for(t=0;t<2;t++) {
		if(t%2 == 0) {
			isPar = 0;
		}
		else {
			isPar=1;
		}
		a.out.setValue(a.in.value,isPar);
		b.out.setValue(b,in,value,isPar);
		AndGate.trigger(isPar);
	}
	cout<<c.out.value<<endl;
}
