#pragma once


class Character 
{
public:
	Character();
	virtual ~Character();


	int HP;
	int Gold;

	//pure virtual function / 순수 가상 함수. 추상클래스. 혼자서는 작동 안함.
	virtual void Move() = 0;
	virtual void Attack() = 0;


};

