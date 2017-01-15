all: lp_solver

fx_solver: lp_solver.cpp
	clang++ -std=c++0x -I/usr/include/coin -o lp_solver lp_solver.cpp -lClp
