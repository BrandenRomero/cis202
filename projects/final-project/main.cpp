#include<iostream> 
#include<iomanip> 
#include "mountain.cpp"

using namespace std;   

int main() {
  Mountain mountains[7];
  mountains[0] = Mountain("Chimborazo", "Ecudador", 20549);
  mountains[1] = Mountain("Matterhorn", "Switzeland", 14692);
  mountains[2] = Mountain("Olympus", " Geece(Macedonia)", 9573);
  mountains[3] = Mountain("Everest", "Nepal", 290929);
  mountains[4] = Mountain("Adirondacks", "United States", 5344);
  mountains[5] = Mountain("Blue Ridge", "United States", 6684);
  mountains[6] = Mountain("Zugpitze", "Switzerland", 9719);

  cout << setw(13) << "Mountain Name" << setw(14) << "Country" << setw(20) << "Elevation (ft)" << setw(20) << "Elevation (mts)" << endl;
  
  for (Mountain mountain : mountains) {
    cout << setw(13) << mountain.getName() << setw(14) << mountain.getCountry() << setw(20) << mountain.getElevation() << setw(20) << mountain.toMeters(mountain.getElevation()) << endl;
  }

  int smallest = minElevation(mountains);
  cout << "Mountain with the smallest elevation: " << mountains[smallest].getName() << " " << mountains[smallest].getCountry() << " "<< mountains[smallest].getElevation() << "ft/" << mountains[smallest].toMeters(mountains[smallest].getElevation()) << "mts" << endl; 

  return 0;
}
