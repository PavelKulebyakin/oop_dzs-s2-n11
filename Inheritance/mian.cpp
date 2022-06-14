# include "Figures.h"

int main() {

	Rhombus A(2, 4); A.SetD1(3);
	std::cout << "Area: " << A.CalcArea() << "  Per: " << A.CalcPer() << "\n\n";

	Rectangle B(3, 5); B.SetB(7);
	std::cout << "Area: " << B.CalcArea() << "  Per: " << B.CalcPer() << "\n";
}