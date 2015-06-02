/*************************************************************************
	> File Name: Wire.h
	> Function: 导线头文件
	> Author: LiLele
	> Mail: 309162998@qq.com 
	> Created Time: 2015年05月15日 星期五 18时46分05秒
 ************************************************************************/
 
 #include<iostream>
 #include"Component.h"
using namespace std;

class Wire	//定义导线
{
	public:
		int value;
		Component in, out;
		void setValue(int value, bool isPar);	//赋值
};
