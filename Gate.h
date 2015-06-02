/*************************************************************************
	> File Name: Gate.h
	> Function: ***
	> Author: LiLele
	> Mail: 309162998@qq.com 
	> Created Time: 2015年05月15日 星期五 18时46分05秒
 ************************************************************************/

#include<iostream>
#include"Wire.h"
using namespace std;

class Gate		//Define Gate
{
	protected:
		Wire input1, input2, output;	//
	public:
		Gate(Wire out){output = out;}		//No input
		Gate(Wire x1, Wire out){input1 = x1; output = out;}	//非门时只有一个input
		Gate(Wire x1, Wire x2, Wire out){input1 = x1; input2 = x2; output = out;}//需要两个输入的门
};

class Inverter:public Gate {
	public:
		Inverter(Wire in, Wire out):Gate(in, out){};
		void trigger(bool isPar);
};

class AndGate:public Gate //与门,继承于Gate
{
	public:
		AndGate(Wire x1, Wire x2, Wire out):Gate(x1, x2, out){};	//获取两个输入并调给Gate类
		void trigger(bool isPar);					//计算
};

class NandGate:public Gate//与非门
{
	public:
		NandGate(Wire x1, Wire x2, Wire out):Gate(x1,x2, out){};
		void trigger(bool isPar);
};

class OrGate:public Gate	//或门
{
	public:
		OrGate(Wire x1, Wire x2, Wire out):Gate(x1,x2, out){};
		void trigger(bool isPar);
};

class NorGate:public Gate	//或非
{
	public:
		NorGate(Wire x1, Wire x2, Wire out):Gate(x1, x2, out){};
		void trigger(bool isPar);
};

class XorGate:public Gate	//异或
{
	public:
		XorGate(Wire x1, Wire x2, Wire out):Gate(x1,x2, out){}
		void trigger(bool isPar);
};

class XnorGate:public Gate	//同或
{
	public:
		XnorGate(Wire x1, Wire x2, Wire out):Gate(x1,x2, out){}
		void trigger(bool isPar);
};

