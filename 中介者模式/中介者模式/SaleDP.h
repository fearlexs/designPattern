#pragma once
#include"AbstractColleague.h"
#include"AbstractMediator.h"
#include< stdlib.h>
#include<iostream>

using namespace std;

class SaleDP : public AbstractColleague
{
public:
	SaleDP(AbstractMediator* in = nullptr) : AbstractColleague(in) {}
	void saleCp(int num);
	bool getSaleStatus();
};

void SaleDP::saleCp(int num)
{
	cout << "���۲�����Ԥ�����ۣ�" << num << " ̨����" << endl;
	abstractMediator->sale(num);
}

bool SaleDP::getSaleStatus()
{
	return (rand() % 11 - 5) > 0;
}