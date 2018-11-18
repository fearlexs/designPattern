#pragma once

class SaleDP;
class PurchaseDP;
class StockDP;

class AbstractMediator
{
public:
	AbstractMediator();
	void setSaleDP(SaleDP* );
	SaleDP* getSaleDP();
	void setPurchaseDP(PurchaseDP* );
	PurchaseDP* getPurchaseDP();
	void setStockDP(StockDP* );
	StockDP* getStockDP();
	virtual void sale(int num) = 0;
	virtual void buy(int num) = 0;
private:
	SaleDP* saleDP;
	PurchaseDP* purchaseDP;
	StockDP* stockDP;
};

AbstractMediator::AbstractMediator() : saleDP(nullptr), purchaseDP(nullptr), stockDP(nullptr)
{

}
void AbstractMediator::setSaleDP(SaleDP* in)
{
	saleDP = in;
}

SaleDP* AbstractMediator::getSaleDP()
{
	return saleDP;
}

void AbstractMediator::setPurchaseDP(PurchaseDP* in)
{
	purchaseDP = in;
}

PurchaseDP* AbstractMediator::getPurchaseDP()
{
	return purchaseDP;
}

void AbstractMediator::setStockDP(StockDP* in)
{
	stockDP = in;
}

StockDP* AbstractMediator::getStockDP()
{
	return stockDP;
}