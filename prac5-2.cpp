#include <iostream>
using namespace std;

int i;

class A
{
public:
	~A() {//�Ҹ��� ��ü �Ҹ�ɶ� 4���� ���� �����Ҷ� ȣ��
		i = 10;
	}
};

int &foo() {
	i = 3;//�������� ����
	A ob;//Ŭ���� ��ü
	return i;
}

int main()
{
	cout << foo() << endl;
	return 0;
}