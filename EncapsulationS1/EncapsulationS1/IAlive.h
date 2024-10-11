#ifndef IALIVE_H__
#define IALIVE_H__



class IAlive
{
public:
	IAlive();
	~IAlive();

public:
	virtual bool IsAlive() = 0;
	virtual void takeDamage(int) = 0;
};

#endif // !IALIVE_H__