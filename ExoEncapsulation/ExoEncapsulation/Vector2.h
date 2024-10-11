#ifndef VECTOR2_H__
#define VECTOR2_H__

class Vector2
{
public:
	Vector2(float x, float y);
	float getPosX();
	float getPosY();
	void setPosX(float posX);
	void setPosY(float posY);
	~Vector2();

private:
	float m_x;
	float m_y;
};


#endif // !VECTOR2_H__
