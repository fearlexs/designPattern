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
	cout << "存储部：：库存增加：" << num << " 台电脑；当前库存：" << stockNum << " 台电脑" << endl;
}

void StockDP::decrease(int num)
{
	stockNum -= num;
	cout << "存储部：：库存减少：" << num << " 台电脑；当前库存：" << stockNum << " 台电脑" << endl;
}