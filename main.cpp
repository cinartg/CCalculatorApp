#include <iostream>

template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

int main() 
{
	std::cout << "Welcome to calculator" << std::endl;
	std::cout << "1: Add\n2: Subtract\n3: Multiply\n4: Divide" << std::endl;
	int choice;
	std::cin >> choice;
	std::cout << "You selected option: " << choice << std::endl;
	std::cout << "Number 1: ";
	 num1;
	std::cin >> num1;
	std::cout << "Number 2: ";
	int num2;
	std::cin >> num2;
	switch (choice) {
	case 1:
		std::cout << "Result: " << add(num1, num2) << std::endl;
		break;
	case 2:
		std::cout << "Result: " << (num1 - num2) << std::endl;
		break;
	case 3:
		std::cout << "Result: " << (num1 * num2) << std::endl;
		break;
	case 4:
		if (num2 != 0)
			std::cout << "Result: " << (num1 / num2) << std::endl;
		else
			std::cout << "Error: Division by zero" << std::endl;
		break;
	default:
		std::cout << "Invalid option" << std::endl;
	}
	std::cout << "Result: " << add(num1, num2) << std::endl;
	return 0;
}