#include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
template<>
void swap(std::string& a, std::string& b) {
	std::string temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 1;
	int b = 2;
	float c = 3.3;
	float d = 4.4;
	std::string e = "hello";
	std::string f = "world";

	swap<int>(a, b);
	swap<float>(c, d);
	swap(e, f);

	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "e: " << e << ", f: " << f << std::endl;

	return 0;
}