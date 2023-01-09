COMPILER = g++
SRC = src/main.cpp
SRC += src/Game.cpp
SRC += src/textureManager.cpp
SRC += src/GameObject.cpp
TARGET = bin/Game
LIBS = -lSDL2
LIBS += -lSDL2_image
#LIBS += -lopencv_core
FLAGS = -Wall
FLAGS += -std=c++17
FLAGS += -Werror

all:
	$(COMPILER) $(SRC) -o $(TARGET) $(FLAGS) $(LIBS) 

clear:
	rm *.o
