#pragma once
#include <iterator>


namespace MyLib {

	template<typename InputIt>
	void bubble_sort(InputIt first, InputIt last) {
		auto end = last;
		auto itr = first;
		while (itr != end) {
			while (itr + 1 != last) {
				if (*itr > *(itr + 1)) {
					auto temp = *itr;
					*itr = *(itr + 1);
					*(itr + 1) = temp;
				}
				itr ++;
			}
			itr = first;
			end--;
		}
	}
}
