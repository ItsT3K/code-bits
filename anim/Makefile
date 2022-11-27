CXX=g++
all: main.cpp
	$(CXX) -g -Wall -o anim -O2 main.cpp
clean:
	$(RM) anim
install:
	$(CXX) -g -Wall -o anim -O2 main.cpp 
	sudo cp anim /usr/local/bin/anim
	rm anim
	