# Google Test Template for TDD
TESTS = tdd_test1
SRC = sample.c
SRC_CPP = sample_test.cpp
GTEST_INSTALL_DIR = /usr

GTEST_DIR = ${GTEST_INSTALL_DIR}/gtest
USER_DIR = .
CFLAGS += -std=c11 -DUNIT_TEST -Wall -Dstatic= -g -O0
CPPFLAGS += -std=c++11 -DUNIT_TEST -Wall -g -O0
GTEST_LIBS =  -L${GTEST_INSTALL_DIR}/lib -lgtest -lgtest_main -lpthread
OBJECTS = $(SRC:%.c=%.o) $(SRC_CPP:%.cpp=%.o)

.PHONY: all clean test testrun

all : testrun

clean :
	$(RM) $(TESTS) *.o

test : $(TESTS)

testrun : test
	@for target in $(TESTS); do\
        ./$$target; \
    done

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $^ -o $@

$(TESTS) : $(OBJECTS)
	$(CXX) $(CPPFLAGS) $^ -o $@ $(GTEST_LIBS)
