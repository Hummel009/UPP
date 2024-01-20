CXX       := g++
CXX_FLAGS := -std=c++11 -ggdb

LD_FLAGS  := -luser32 -lgdi32

BIN        := bin
SRC        := src
BUILD      := build
INCLUDE    := -Iinclude

LIBRARIES   :=
EXECUTABLE  := main

SRCS := $(wildcard $(SRC)/*.byl)
OBJS := $(SRCS:$(SRC)/%.byl=$(BUILD)/%.o)

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXX_FLAGS) $(INCLUDE) $^ -o $@ $(LIBRARIES) $(LD_FLAGS)

$(BUILD)/%.o: $(SRC)/%.byl
	$(CXX) $(CXX_FLAGS) $(INCLUDE) -c $< -o $@ $(LIBRARIES) $(LD_FLAGS)

clean:
	-rm -rf $(BUILD)/*
	-rm $(BIN)/$(EXECUTABLE)
