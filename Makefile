CXX = g++
CXXFLAGS = -Wall -O2 -Iinclude

TARGET = assignment1

SRC = main.cpp src/parse_transactions.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
