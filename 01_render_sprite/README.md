## macOS Instructions

INSTALL

```
brew install sdl2 sdl2_image llvm
```

BUILD

```
mkdir build &&
clang++ -v -std=c++11 -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -lSDL2_image main.cpp renderer_opengl.cpp -o ./build/game -framework OpenGL
```

RUN

```
./build/game
```
