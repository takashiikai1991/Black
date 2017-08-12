#pragma once

#include <vector>
#include <map>

namespace BS {

	class Vol {

	public:
		Vol(const double& rr10, const double& rr25,
			const double& bf10, const double& bf25)
			:_rr10(rr10), _rr25(rr25), _bf10(bf10), _bf25(bf25)
		{};

		void calcVolSmile();
		//		std::map<std::string,double> VolSmile;

	private:
		const double getPriceRR25();
		const double getPriceRR10();
		const double getPriceBF10();
		const double getPriceBF25();

	private:
		const double getRR25() { return _rr25; };
		const double getRR10() { return _rr10; };
		const double getBF10() { return _bf25; };
		const double getBF25() { return _bf10; };

		const double _rr25;
		const double _rr10;
		const double _bf25;
		const double _bf10;


	};

}