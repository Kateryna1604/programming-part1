CC = gcc
CFLAGS = -Wall -Iinclude -IUnity/src -fprofile-arcs -ftest-coverage

SRC_DIR = src
TEST_DIR = test

EXECUTABLE = main
TEST_EXECUTABLE = run_tests

LIB = libproject.a
UNITY_C = Unity/src/unity.c

LIB_SRC = $(SRC_DIR)/lib.c
LIB_OBJ = $(SRC_DIR)/lib.o

TEST_MAIN = $(TEST_DIR)/test_main.c
TEST_LIB  = $(TEST_DIR)/test_lib.c

.PHONY: all clean test

all: $(EXECUTABLE)

$(EXECUTABLE): main.o $(LIB)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) main.o $(LIB) -lm

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

$(LIB): $(LIB_OBJ)
	ar rcs $(LIB) $(LIB_OBJ)

$(LIB_OBJ): $(LIB_SRC)
	$(CC) $(CFLAGS) -c $(LIB_SRC) -o $(LIB_OBJ)

test: $(TEST_EXECUTABLE)
	./$(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_MAIN) $(TEST_LIB) $(UNITY_C) $(LIB)
	$(CC) $(CFLAGS) -o $(TEST_EXECUTABLE) $(UNITY_C) $(TEST_MAIN) $(TEST_LIB) $(LIB) -lm

clean:
	rm -f main run_tests main.o $(LIB) $(LIB_OBJ)
	rm -f *.gcno *.gcda *.gcov coverage.info
	rm -rf coverage_report