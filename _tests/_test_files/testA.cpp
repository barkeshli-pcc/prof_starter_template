#include "gtest/gtest.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include "../../includes/stub/stub.h"
using namespace std;

bool simple_test(bool debug = true){
  if (debug){
    cout << "\nbasic test: calling stub()\n" << endl;
  }
  return stub();
}

TEST(SIMPLE_TEST, SimpleTest81008) {
  
  //EXPECT_EQ(1, <your individual test functions are called here>);

  EXPECT_EQ(1, simple_test(false));
}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testA.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

