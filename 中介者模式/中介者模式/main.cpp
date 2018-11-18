/*
���ģʽ֮��--ѧϰ�н���ģʽ
��������ʵ�������в�ͬ��
	���а��н�����Ϊ������ֵĽӿڣ���ͬ��������
	�����н��н������أ��������ͬ����
�н���ģʽ�Ĺؼ��ǽ����н�����ͬ��֮���˫������Ĺ�ϵ����һ�㱾�������������в�ͬ��
	�����н����а���ͬ�¶��󣬽���������̬��Աʹ�ã�����ֻʹͬ�¹����н�
	��������Ҫ��ͬ�����н��໥����
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