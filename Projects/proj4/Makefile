EXE = proj4
SOURCES = $(wildcard *.cpp)
OBJS = $(SOURCES:.cpp=.o)

CXXFLAGS = -ansi -Wall

$(EXE): $(OBJS)
	$(CXX) $(OBJS) -o $(EXE)
	./$(EXE)

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< 
	
clean:
	rm -f $(EXE) $(OBJS)
	
run:
	./$(EXE)

