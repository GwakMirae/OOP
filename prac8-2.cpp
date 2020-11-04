#include <iostream>

class GlobalLogger
{
	int log_value;
public:
	GlobalLogger(int v = 0)
	{
		log_value = v;
	}
	int get_log_data()
	{
		return log_value;
	}
	void set_log_data(int v)
	{
		log_value = v;
	}
};

// Default initialization
GlobalLogger* global_Logger_ptr = 0;
//globallogger ��ü�� �����ϴ� �Լ��� �������ΰ��� ��ȿ����
void Logger_User_A(void)
{
	if (!global_Logger_ptr)
	{
		global_Logger_ptr = new GlobalLogger;
	}
	global_Logger_ptr->set_log_data(1);
	std::cout << "Logger_User_A:log_data_is" << global_Logger_ptr->get_log_data() << '\n';
}

void Logger_User_B(void)
{
	if (!global_Logger_ptr)
	{
		global_Logger_ptr = new GlobalLogger;
	}
	global_Logger_ptr->set_log_data(2);
	std::cout << "Logger_User_B:log_data_is" << global_Logger_ptr->get_log_data() << '\n';
}

int main()
{
	if (!global_Logger_ptr)
	{
		global_Logger_ptr = new GlobalLogger;
	}
	std::cout << "main:log_data is" << global_Logger_ptr->get_log_data() << "\n";
	Logger_User_A();
	Logger_User_B();
	// loggerA, B�� ���� ��ü�� �������� ������ ���� �������� logger�����͸� 0���� �ʱ�ȭ���ָ�
	// ���� ��ü�� �ߺ��Ǿ �����ȴ�.
	// logger value�� �����ϴ� ��ü�� �ϳ��� �־ ����ϱ� ������ �ϳ��� ��ü�� �����Ͽ� �� ��ü�� �����ϴ� ���� �̱�������
	//global_Logger_ptr =0 �� ���ָ� 3���� ��ü�� ������.
}