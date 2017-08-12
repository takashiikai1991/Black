
#include "Reader.h"

namespace file{

	Reader::Reader(std::string path)
		: _path(path)
	{};

	const int Reader::dayToInt(std::string day) {
		//need to convert Year/Month/Days -> Days;

		size_t first = day.find("/", 0);
		size_t second = day.find("/", first);

		return 0;
	};

		//const std::vector<std::string> Reader::getDFs() {
	//	std::map<int,double> a
	//}
	//
	const std::vector<std::string> Reader::getLines(){
		std::ifstream ifs(_path);
		std::vector<std::string> vec;
		std::string str("");

		if (ifs.fail())
		{
			std::cerr << "Ž¸”s" << std::endl;
			vec.push_back(str);
			return vec;
		}
		while (getline(ifs, str))
		{
			vec.push_back(str);
			std::cout << "[" << str << "]" << std::endl;
		}
		return vec;

	}

}