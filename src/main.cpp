#include <iostream>
#include <string>
#include <glog/logging.h>
int main(){
google::InitGoogleLogging("log_chifoumi");
 google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
 

  std::cout<<"hello world";
   
   LOG(INFO)  << "test222*******";

  return 0;   
}
