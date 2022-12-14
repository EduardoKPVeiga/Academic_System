default:
	g++ ./source/* -o academicSystem


# # My third makefile
 
# # Name of the project
# PROJ_NAME=academicSystem
 
# # .c files
# C_SOURCE=$(wildcard ./source/*.cpp)
 
# # .h files
# H_SOURCE=$(wildcard ./include/*.h)
 
# # Object files
# OBJ=$(subst .cpp,.o,$(subst source,objects,$(C_SOURCE)))
 
# # Compiler and linker
# CC=gcc
 
# # Flags for compiler
# CC_FLAGS=-c         \
# 		-W         \
# 		-Wall      \
# 		-ansi      \
# 		-pedantic
 
# # Command used at clean target
# RM = rm -rf
 
# #
# # Compilation and linking
# #
# all: objFolder $(PROJ_NAME)
 
# $(PROJ_NAME): $(OBJ)
# 	@ echo 'Building binary using GCC linker: $@'
# 	$(CC) $^ -o $@
# 	@ echo 'Finished building binary: $@'
# 	@ echo ' '
 
# ./objects/%.o: ./source/%.cpp ./include/%.h
# 	@ echo 'Building target using GCC compiler: $<'
# 	$(CC) $< $(CC_FLAGS) -o $@
# 	@ echo ' '
 
# ./objects/main.o: ./source/main.c $(H_SOURCE)
# 	@ echo 'Building target using GCC compiler: $<'
# 	$(CC) $< $(CC_FLAGS) -o $@
# 	@ echo ' '
 
# objFolder:
# 	@ mkdir -p objects
 
# clean:
# 	@ $(RM) ./objects/*.o $(PROJ_NAME) *~
# 	@ rmdir objects
 
# .PHONY: all clean