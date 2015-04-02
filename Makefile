all:
	g++ -Wall -ansi Lab11.cpp Shape.cpp Rectangle.cpp Triangle.cpp -o Lab11.out
run:
	./Lab11.out
clean:
	rm -rf *.o *~ *#
