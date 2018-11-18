/*
设计模式之禅--学习中介者模式
本工程中实现与书中不同：
	书中把中介者作为对外呈现的接口，把同事类隐藏
	工程中将中介者隐藏，对外呈现同事类
中介者模式的关键是建立中介者与同事之间的双向关联的关系，这一点本工程与书中又有不同：
	书中中介者中包含同事对象，将对象当做静态成员使用，所以只使同事关联中介
	工程中需要将同事与中介相互关联
*/

#include<iostream>
#include"Mediator.h"
#include"SaleDP.h"
#include"StockDP.h"
#include"PurchaseDP.h"

using namespace std;

int main()
{
	Mediator mediator;
	SaleDP saleDP(&mediator);
	StockDP stockDP(&mediator);
	PurchaseDP purchase(&mediator);
	mediator.setSaleDP(&saleDP);
	mediator.setStockDP(&stockDP);
	mediator.setPurchaseDP(&purchase);
	cout << "---------------------------" << endl;
	saleDP.saleCp(10);
	cout << "---------------------------" << endl;
	purchase.buyCp(20);
	return 0;
}