CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude
TARGET = build/main
SRC_DIR = src
SRCS = $(shell find $(SRC_DIR) -name '*.cpp')
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
