#include <string>
#include <iostream>

class Animal {
private:
	std::string name;
public:
	Animal() {};
	Animal(std::string name) : name(name) {};
	void showName() {
		std::cout << "Name is " << name << std::endl;
	}
	std::string operator+(Animal a) {
		std::string n = this->name + a.name;
		return n;
	}
	//operator+ �߰��ϼ���
};
int main() {
	Animal cat("Nabi");
	cat.showName();
	Animal dog("Jindo");
	dog.showName();
	Animal catDog = dog + cat; //������ �ռ�
	catDog.showName();
	dog.showName();
	getchar();
	return 0;
}