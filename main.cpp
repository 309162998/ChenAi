/*************************************************************************
	> File Name: main.cpp
	> Function: 主函数
	> Author: LiLele
	> Mail: 309162998@qq.com 
	> Created Time: 2015年05月15日 星期五 18时45分58秒
 ************************************************************************/

#include<iostream>
#include<unistd.h>
#include"Construct.h"
//#include"Gate.h"
using namespace std;
int main(int argc, char *argv[])
{
	int x1, x2;
	cout<<"Please input the first data:"<<endl;
	cin>>x1;
	cout<<"Please input the second data:"<<endl;
	cin>>x2;
	Construct(x1, x2);
//	Wire a, b, c;
//	AndGate(a, b, c);
	int t;//time
	for(t=0;t<20;t++) {
		if(t%2 == 0) {
			cout<<"_|";
		}
		else {
			cout<<"-|";
		}
		sleep(0.5);
	}
	cout<<endl;
	return 0;
}
