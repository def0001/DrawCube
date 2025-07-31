class Cube {
  public:
    void DrawCube(int size, int style = 0) {
      std::cout << "\n";
      if (size < 2) {
        DrawHorizontalLine(1, style, 0);
        DrawHorizontalLine(1, style, 1);
        return;
      }
      DrawHorizontalLine(size, style, 0);
      DrawWalls(size, style);
      DrawHorizontalLine(size, style, 1);

    }
  private:
    void DrawHorizontalLine(int size, int style, int pos = -1) { // pos: 0 - top, 1 - bottom
      if (style == 0) {
        std::cout << "[";
        for (int i = 0; i < size; i++) {
          std::cout << "-";
        }
        std::cout << "]\n";
      } else if (style == 1) {
          if (pos == 0) {
            std::cout << "┌";
            for (int i = 0; i < size; i++) {
              std::cout << "─";
            }
            std::cout << "┐\n";
          } else {
            std::cout << "└";
            for (int i = 0; i < size; i++) {
              std::cout << "─";
            }
            std::cout << "┘\n";
          }
        }
    }

    void DrawWalls(int size, int style) {
      if (style == 0) {
        for (int i = 0; i < (size/3); i++)
          std::cout << "[\033[" << size << "C]\n";
      } else if (style == 1)
          for (int i = 0; i < (size/3); i++)
            std::cout << "│\033[" << size << "C│\n";
    } 
};
