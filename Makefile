COMPILER = g++ -std=c++11
COMPILE_FLAGS = 
COMPILE = $(COMPILER) $(COMPILE_FLAGS)

EXE = lexer
SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_DIR = obj
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(EXE)

$(EXE): $(OBJ)
	$(COMPILE) $^ -o $@ 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp 
	$(COMPILE) -c $< -o $@

clean:
	rm -f obj/* $(EXE)

		
