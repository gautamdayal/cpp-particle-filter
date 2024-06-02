main: 
	clang++ -std=c++20 src/main.cpp -lstdc++  -framework IOKit -framework Cocoa -framework OpenGL `pkg-config --libs --cflags raylib` -o bin/exec
