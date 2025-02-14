SRC_DIR=src
BUILD_DIR=build

PROJECT_NAME=SystemUpdater
CPP_UPDATERS_MODULE=$(wildcard $(SRC_DIR)/updaters/*.cpp)
CPP_SOURCE=$(wildcard $(SRC_DIR)/*.cpp)
OBJECTS_UPDATERS_MODULE=$(CPP_UPDATERS_MODULE:$(SRC_DIR)/updaters/%.cpp=$(BUILD_DIR)/updaters/%.o)
OBJECTS=$(CPP_SOURCE:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

COMPILER=g++
COMPILER_FLAGS=-c

.PHONY: $(PROJECT_NAME)
main: $(PROJECT_NAME)

$(PROJECT_NAME): $(OBJECTS) $(OBJECTS_UPDATERS_MODULE)
	$(COMPILER) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(BUILD_DIR)
	$(COMPILER) -o $@ $< $(COMPILER_FLAGS)

$(BUILD_DIR)/updaters/%.o: $(SRC_DIR)/updaters/%.cpp
	mkdir -p $(BUILD_DIR)/updaters
	$(COMPILER) -o $@ $< $(COMPILER_FLAGS)

.PHONY: clean
clean:
	rm -r $(BUILD_DIR) $(PROJECT_NAME) || true

