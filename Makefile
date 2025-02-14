SRC_DIR=src
BUILD_DIR=build

PROJECT_NAME=SystemUpdater
CPP_SOURCE=$(wildcard src/*.cpp)
OBJECTS=$(CPP_SOURCE:src/%.cpp=build/%.o)

COMPILER=g++
COMPILER_FLAGS=-c

.PHONY: $(PROJECT_NAME)
main: $(PROJECT_NAME)

$(PROJECT_NAME): $(OBJECTS)
	$(COMPILER) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(BUILD_DIR)
	$(COMPILER) -o $@ $< $(COMPILER_FLAGS)

.PHONY: clean
clean:
	rm -r $(BUILD_DIR) $(PROJECT_NAME) || true

