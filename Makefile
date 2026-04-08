CXX = g++
CXXFLAGS = -Wall -O2 -Iinclude

TARGET = assignment1

SRC = main.cpp src/read_file.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
