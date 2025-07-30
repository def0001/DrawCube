#include <iostream>

class Cube {
  public:
    void DrawCube(int size) {
      std::cout << "\n";
      if (size < 2) {
        DrawVerticalLine(1);
        return;
      }
      DrawVerticalLine(size);
      DrawWalls(size);
      DrawVerticalLine(size);

    }

    void DrawVerticalLine(int size) {
      std::cout << "[";
      for (int i = 0; i < size; i++) {
        std::cout << "-";
      }
      std::cout << "]\n";
    }

    void DrawWalls(int size) {
      for (int i = 0; i < (size/3); i++) {
        std::cout << "[\033[" << size << "C]\n";
      }
    }
};

int main() {
  Cube cube;
  cube.DrawCube(10);
  return 0;
}
