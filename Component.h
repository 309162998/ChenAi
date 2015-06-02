/*************************************************************************
	> File Name: Component.h
	> Function: 端点的头文件
	> Author: LiLele
	> Mail: 309162998@qq.com 
	> Created Time: 2015年05月15日 星期五 18时46分05秒
 ************************************************************************/
 
 #include<iostream>
 using namespace std;
 
 class Component {	//定义端点类
 public:
 	int value;	//端电点位
 	class Component *next;	//与之连接的下一个端点
 	void trigger(bool isPar);	//触发器函数
 };
