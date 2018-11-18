#pragma once
#include"AbstractColleague.h"
#include"AbstractMediator.h"
#include<iostream>

using namespace std;

class StockDP : public AbstractColleague
{
public:
	StockDP(AbstractMediator* in = nullptr) : AbstractColleague(in), stockNum(0){}
	int getStockNum();
	void increase(int num);
	void decrease(int num);
private:
	int stockNum;
};

int StockDP::getStockNum()
{
	return stockNum;
}

void StockDP::increase(int num)
{
	stockNum += num;
	cout << "�洢������������ӣ�" << num << " ̨���ԣ���ǰ��棺" << stockNum << " ̨����" << endl;
}

void StockDP::decrease(int num)
{
	stockNum -= num;
	cout << "�洢�����������٣�" << num << " ̨���ԣ���ǰ��棺" << stockNum << " ̨����" << endl;
}