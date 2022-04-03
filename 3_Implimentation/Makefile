PROJ_NAME = line_para_computation
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/line_para.c

TEST_SRC = test/test_para.c\
unity/unity.c

INC = -Iinc\
-Iunity

DOCUMENTATION_OUTPUT = documentation/html\
documentation/latex\


ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out -lm
   endif
endif

.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(BUILD_DIR) $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))



coverage:${PROJECT_NAME}
	gcc $(INC) -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) -o $(call FixPath,$(BUILD_DIR)/$(COVERAGE_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(COVERAGE_PROJ_NAME).$(EXEC))
	gcov -a $(SRC) $(TEST_SRC)
cpp:
		cppcheck enable=all $(SRC) main.c 
doc:
	make -C documentation

clean:
	
	rm -rf $(BUILD_DIR) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

$(BUILD_DIR):
	mkdir $(BUILD_DIR)
