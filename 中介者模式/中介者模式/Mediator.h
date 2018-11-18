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
		cout << "�н鲿���������㣬ֱ������" << endl;
		getStockDP()->decrease(num);
	}
	else
	{
		cout << "�н鲿������治�㣬�ɹ�������" << endl;
		buy(num);
		getStockDP()->decrease(num);
	}
}

void Mediator::buy(int num)
{
	bool saleStatus = getSaleDP()->getSaleStatus();
	if (saleStatus)
	{
		cout << "�н鲿���������ܺã����ƻ��ɹ�" << endl;
		getStockDP()->increase(num);
	}
	else
	{
		cout << "�н鲿�����������ã�����ɹ�" << endl;
		getStockDP()->increase(num / 2);
	}
}
