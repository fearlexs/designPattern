#pragma once

class AbstractMediator;
class AbstractColleague
{
public:
	AbstractColleague(AbstractMediator* in = nullptr) : abstractMediator(in){}
protected:
	AbstractMediator* abstractMediator;
};