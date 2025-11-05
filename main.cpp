#include <iostream>
#include <iomanip>
#include "./calculator.cpp"

int main() {
	int S, k, draw;
	long double p;
	GeometricCaluclator flop(50, 3), turn(47, 1), river(46, 1);
	while (true) {
		std::cout << "Calculate probability for Flop(1), Turn(2), River(3): ";
		std::cin >> draw;
		std::cout << "Number of hits in deck: ";
		std::cin >> S;
		
		if (k > S) draw = 4;
		switch (draw) {
			case 1:
			std::cout << "Number of hits required: ";
			std::cin >> k;
			p = flop.prob(S, k);
			break;

			case 2:
			p = turn.prob(S, 1);
			break;

			case 3:
			p = river.prob(S, 1);
			break;

			case 4:
			p = 0;
			break;
			
			default:
			std::cout << "Invalid input" << std::endl;
			continue;
		}
		std::cout << std::fixed << std::setprecision(2) << "P(X - k): " << p * 100 << "%" << std::endl;
	}
}