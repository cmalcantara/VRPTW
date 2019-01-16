# This file is part of Carefree-Sword/VRPTW.
#
# Copyright (c) 2019, David Amante and Carlos Alcantara.
# All rights reserved (see LICENSE).

# Variables.
CXX ?= g++
CXXFLAGS = -MMD -MP -I. -std=c++14 -Wextra -Wpedantic -Wall -O3

# Using all cpp files in current directory.
MAIN = ../bin/vrptw
LIB = ../lib/vrptw.a

SRC = $(wildcard ./*.cpp)

OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

# Main target.
all : $(MAIN) $(LIB)

$(MAIN) : $(OBJ) main.o
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(LIB) : $(OBJ)
	mkdir -p $(@D)
	$(AR) cr $@ $^

# Building .o files.
%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include ${DEPS}

clean :
	$(RM) $(OBJ) $(DEPS)
	$(RM) $(MAIN)
	$(RM) $(LIB)
