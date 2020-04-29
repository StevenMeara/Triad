
# Ref: http://nuclear.mutantstargoat.com/articles/make/

# *******************

# App Name


APP := Triad
CXX := g++

# *******************

# Source Definition

SOURCE :=  main.cxx $(wildcard src/*.cxx) $(wildcard src/**/*.cxx) $(wildcard src/**/**/*.cxx)
OBJECTS := $(SOURCE:.cxx=.obj)

# *******************

# Libraries 

INCLUDES := -I./include 
LIBS := -L/usr/local/lib -lportaudio -lrtmidi -lglfw -framework OpenGL
# *******************

# Flags

FLAGS := -Wall -g -std=c++17 

# *******************

# Compile

$(APP) : $(OBJECTS)
	$(CXX) -o $@ $^ $(FLAGS) $(LIBS) 

%.obj: %.cxx
	$(CXX)  -o $@ -c $< $(FLAGS) $(INCLUDES)

# Clean

clean:
	rm -f $(OBJECTS) $(APP)