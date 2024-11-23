#include <iostream>
#include <vector>
#include <memory>
#include <array>



int main(int argc, char** argv){
	std::cout << "Hello World" << std::endl;
	size_t len = 10;
	std::vector<double> vect(10);
	std::unique_ptr<std::vector<double>> f_ptr = std::make_unique<std::vector<double>>(10);


	for (size_t i = 0; i < len; ++i){
		std::cout << f_ptr->at(i) << std::endl;
	}

	return 0;
}
