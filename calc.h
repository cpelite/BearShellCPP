#include <iostream>

int calc() {

	char op; 
	float num1, num2;
	std::string qs_answer;

	std::cout << "Please enter a operator (+, -, *, /): ";
	std::cin >> op;

	std::cout << "Please enter the first operand: " << std::endl;
	std::cin >> num1;

	std::cout << "Please enter the second operand: " << std::endl;
	std::cin >> num2;

	std::cout << "You entered the following values: " << std::endl;

	std::cout << "Operator: " << op << std::endl;
	std::cout << "First operand: " << num1 << std::endl;
	std::cout << "Second operand: " << num2 << std::endl;

	std::cout << "Is this correct? If your entries aren't correct, type reinit to reinitalize the calculator.";
	std::cin >> qs_answer;

	if (qs_answer == "yes") {
		switch (op) {
		case '+':
			std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
			break;

		case '-':
			std::cout << num1 << " - " << num2 << "=" << num1 - num2 << std::endl;
			break;

		case '*':
			std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
			break;

		case '/':
			std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
			break;

		default:
			std::cout << "You did not enter a operator. Please check your entry and try again." << std::endl;
			break;

		} 
		return 0;
	}

	else if (qs_answer == "reinit") {
		calc();
	}

	else {
		std::cout << "Terminating, going back to main screen." << std::endl;
	}
}