#include <gtest/gtest.h>
#include "udp_server_ipv6.h"

int main(int argc, char** argv) {
  UDPServerIPv6 server("fe80::1ff:fe23:4567:890a%3", 8000);
  testing::InitGoogleTest(&argc, argv);
  printf("testing");
  return RUN_ALL_TESTS();
}