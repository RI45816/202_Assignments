EXE = proj5
CXXFLAGS = -Wall -g
SOURCES = $(wildcard *.cpp)
OBJS = $(SOURCES:.cpp=.o)
DEPS = $(wildcard *.h)

# proj5: driver.cpp Tqueue.h Item.o Truck.h ReadyDelivery.o Delivery.o ManageDelivery.o
	# $(CXX) $(CXXFLAGS) Tqueue.h driver.cpp Item.o Truck.h ReadyDelivery.o ManageDelivery.o Delivery.o -o proj5

all: $(EXE) run1

$(EXE): $(OBJS)
	$(CXX) $(OBJS) -o $(EXE)	
	
	
# ManageDelivery.o: ManageDelivery.h ManageDelivery.cpp Item.o Delivery.o Tqueue.h Truck.h ReadyDelivery.o
	# $(CXX) $(CXXFLAGS) -c ManageDelivery.cpp

# ReadyDelivery.o: ReadyDelivery.h ReadyDelivery.cpp Item.o Delivery.o Tqueue.h Truck.h
	# $(CXX) $(CXXFLAGS) -c ReadyDelivery.cpp

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< 
	
	
#Use these to test the Tqueue and Truck but make sure to comment out or delete!
# Truck.o: Truck.h Tqueue.o
	# $(CXX) $(CXXFLAGS) -c Truck.h

# Tqueue.o: Tqueue.h
	# $(CXX) $(CXXFLAGS) -c Tqueue.h

clean:
	rm -f $(EXE) $(OBJS)
	# rm *.o*
	# rm *~ 

	

#Rules to test your projects
run:
	./proj5

run1:
	./proj5 proj5_truck_t1.txt proj5_delivery_t1.txt proj5_item_t1.txt

run2:
	./proj5 proj5_truck_t2.txt proj5_delivery_t2.txt proj5_item_t2.txt

run3:
	./proj5 proj5_truck_t3.txt proj5_delivery_t3.txt proj5_item_t3.txt

#rules to test using valgrind
valgrind1:
	valgrind ./proj5 proj5_truck_t1.txt proj5_delivery_t1.txt proj5_item_t1.txt

valgrind2:
	valgrind ./proj5 proj5_truck_t2.txt proj5_delivery_t2.txt proj5_item_t2.txt 

valgrind3:
	valgrind ./proj5 proj5_truck_t3.txt proj5_delivery_t3.txt proj5_item_t3.txt
	
depend: .depend

.depend: $(DEPS)
	rm -f ./.depend
	$(CC) $(CFLAGS) -MM $^ > ./.depend;

include .depend