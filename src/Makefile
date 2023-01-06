COMPILER = g++
SRC = main.cpp
SRC += Game.cpp
SRC += textureManager.cpp
TARGET = Game
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