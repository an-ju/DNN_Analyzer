#ifndef __ANALYZER_H__
#define __ANALYZER_H__

#include <fstream>
#include "DNNSnapshot_parser.h"

class Analyzer{
	std::ofstream &fout;

public:
	Analyzer(std::ofstream &f): fout(f){};

	void inDegreeAngle(DNNSnapshot *pre_DNN, DNNSnapshot *tem_DNN);
	void inDegreeModule(DNNSnapshot *tem_DNN);
};


#endif //__ANALYZER_H__