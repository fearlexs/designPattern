#pragma once
#include"AbstractColleague.h"
#include"AbstractMediator.h"
#include<iostream>

using namespace std;

class PurchaseDP : public AbstractColleague
{
public:
	PurchaseDP(AbstractMediator* in = nullptr) : AbstractColleague(in) {}
	void buyCp(int num);
};

void PurchaseDP::buyCp(int num)
{
	cout << "�ɹ�������Ԥ�ڲɹ���" << num << " ̨����" << endl;
	abstractMediator->buy(num);
}