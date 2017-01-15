#include <ClpSimplex.hpp>
#include <vector>
#include <iostream>
#include <string>

int main( int argc, const char *argv[]) {
	if(argc < 2) {
		std::cerr << "no filename given" << std::endl;
		return 1;
	}
	ClpSimplex model;
	int status;
	status = model.readLp( argv[1] );
	if ( !status ) {
		model.primal();
	}
	auto nCol = model.numberColumns();
	auto colSolution = model.getColSolution();
	for(int i=0; i<nCol; i++ ) {
		std::cout << model.getColumnName(i) 
			<< ": " << colSolution[i] << std::endl;
	}
	return 0;
}
