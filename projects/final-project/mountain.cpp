#include"mountian.h" 

using namespace std;

Mountain::Mountain() {
  this->name = "";
  this->country = "";
  this->elevation = 0; 
}

Mountain::Mountain(string name, string country, int elevation) {
  this->name = name;
  this->country = country;
  this->elevation = elevation;
} 

void Mountain::setName(string name) {
  this->name = name; 
}

void Mountain::setCountry(string country) {
  this->country = country; 
} 

void Mountain::setElevation(int elevation) {
  this->elevation = elevation; 
} 

string Mountain::getName() {
  return name; 
} 

string Mountain::getCountry() {
  return country; 
} 

int Mountain::getElevation() {
  return elevation; 
} 

double Mountain::toMeters(double elevationInFeets) {
  double FEET_TO_METER = 1 / 3.2808;
  return elevationInFeets * FEET_TO_METER; 
} 

int minElevation(Mountain mountains[]) {
  int minIndex = 0;
  for (int i = 0; i <7; i++) {
    if (mountains[i].getElevation() < mountains[minIndex].getElevation()) {
      minIndex = i;
    }
  }
  return minIndex;
}