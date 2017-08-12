#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>

namespace file {
	class Reader {
	public:
		Reader(std::string path);

		const std::vector<std::string> getLines();

	private:
		const int dayToInt(std::string day);

		const std::map<int,double> getDFs();

	private:
		std::string _path;


	};
		
}