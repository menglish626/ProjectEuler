#Michael-Patrick English
#makefile
#this is my make file for Project

CXXFLAGS=-std=c++11 -O3 -Wall
CXX=/usr/bin/g++ $(CXXFLAGS)
GTESTDIR=googletest-master/googletest/include
all:

	$(CXX) -c BigNum.cpp -o BigNum.o



test:

	$(CXX)  -I$(GTESTDIR) BigNum_unittest.cc -o BigNum_unittest

