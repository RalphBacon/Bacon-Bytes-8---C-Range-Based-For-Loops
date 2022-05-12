/*
  Video #244: for-next vs range-based loops
*/
#include <LibPrintf.h>

char* cars[] = { "BMW", "FORD", "OPEL", "MAZDA", "CHRYSLER" };

void setup() {
  Serial.begin(115200);

  for (auto& car : cars) {
    printf("Car range based: %s\n", car);
    car = "Mercedes";
  }

  Serial.println("----------------");

  for (auto car : cars) {
    printf("Car range based: %s\n", car);
  }

  // Traverse the array backwards
  for (auto cnt = 4; cnt >= 0; cnt--) {
    printf("Car range based: %s\n", cars[cnt]);    
  }
}









/*
  Serial.println("----------------");

  for (auto &car : cars) {
    printf("Car range based: %s\n", car);
    car = "Mercedes";
  }

  Serial.println("----------------");

  for (auto car : cars) {
    printf("Car ref range based: %s\n", car);
  }

  warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
*/


void loop() {
}