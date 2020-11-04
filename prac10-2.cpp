
class Base
{
public:
	void func_1() {};
protected:
	void func_2() {};
private:
	int x_;
};

class Derived : public Base
{
public:
	void func_3() {
		func_1();
		func_2();
	}
};

int main() {
	Derived d;
	d.func_3();
	//protected�� ����� ������ Base�Լ����� DerivedŬ���������ۿ� ��� ����
	// public ������� �ٲ��־�� ��ü�� ���� ��밡��
	d.func_1();
}