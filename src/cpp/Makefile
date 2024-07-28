CXX = g++
CXXFLAGS = -Iinclude -Wall -Wextra
TARGET = build/main
SRC_DIR = src
SRC = $(shell find $(SRC_DIR) -name '*.cpp')
OBJ_DIR = build/out
OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
	rm -rf $(OBJ_DIR)
