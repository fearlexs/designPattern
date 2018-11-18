#pragma once
#include"AbstractMediator.h"
#include"PurchaseDP.h"
#include"SaleDP.h"
#include"StockDP.h"
#include<iostream>

using namespace std;

class Mediator : public AbstractMediator
{
	virtual void sale(int num);
	virtual void buy(int num);
};

void Mediator::sale(int num)
{
	int stockNum = getStockDP()->getStockNum();
	if (stockNum > num)
	{
		cout << "中介部：：库存充足，直接销售" << endl;
		getStockDP()->decrease(num);
	}
	else
	{
		cout << "中介部：：库存不足，采购后销售" << endl;
		buy(num);
		getStockDP()->decrease(num);
	}
}

void Mediator::buy(int num)
{
	bool saleStatus = getSaleDP()->getSaleStatus();
	if (saleStatus)
	{
		cout << "中介部：：销量很好，按计划采购" << endl;
		getStockDP()->increase(num);
	}
	else
	{
		cout << "中介部：：销量不好，减半采购" << endl;
		getStockDP()->increase(num / 2);
	}
}
