#pragma once


class Character 
{
public:
	Character();
	virtual ~Character();


	int HP;
	int Gold;

	//pure virtual function / ���� ���� �Լ�. �߻�Ŭ����. ȥ�ڼ��� �۵� ����.
	virtual void Move() = 0;
	virtual void Attack() = 0;


};

