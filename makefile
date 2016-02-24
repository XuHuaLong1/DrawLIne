TARGET = .
CC = g++
CFLAGS = -g
CFLAGC = -c

MAINC = main.cpp
DRAWLINE = DrawLine.cpp
OBJ	= DrawLine.o

INCLUDE = -I$(TARGET)
	EXEC = $(TARGET)/main

all: $(EXEC)
$(EXEC):$(OBJ)$(MAINC)
	$(CC)$(CFLAGS)$(OBJ)$(MAINC)$(INCLUDE) -o $@
	rm -f $(OBJ)
	@echo "<<<<<< $@ is created successfully! >>>>"
	$(OBJ): $(DRWALINE) 
	$(CC) $(CFLAGC)$(DRAWLINE) -o $@
	clean:
	rm -f $(EXEC)
	
