#pragma once
#include <iterator>


namespace MyLib {
	
	template<typename InputIt, typename T>
	InputIt linear_search(InputIt first, InputIt last, T val) {
		/*if (typeid(std::iterator_traits<InputIt>::value_type) == typeid(T)) {
			std::cout << typeid(std::iterator_traits<InputIt>::value_type).name() << std::endl;
			std::cout << typeid(T).name() << std::endl;
			throw std::invalid_argument("Different value type");
		}*/
		while (first != last) {
			if (*first == val) {
				return first;
			}
			first++;
		}
		return last;
	}


	template<typename InputIt, typename T>
	bool binary_search(InputIt first, InputIt last, T val) {
		while (first < last) {
			auto itr = first + ((last - first) / 2);
			if (*itr == val) {
				return true;
			}
			if (val > *itr) {
				return binary_search(itr + 1, last, val);
			}
			else {
				return binary_search(first, itr - 1, val);
			}
		}
		return false;
	}
}