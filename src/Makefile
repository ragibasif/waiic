# Variables

#   - `CC`: The compiler used is `gcc`.
#   - `CFLAGS`: Compiler flags (e.g., `-Wall` for warnings, `-O2` for optimization, `-I.` to include the current directory for header files).
#   - `SRCS`: List of source files (`.c` files).
#   - `OBJS`: List of object files (derived from `.c` files by replacing `.c` with `.o`).
#   - `TARGET`: The name of the final executable.
#   - `all`: The default target that builds the executable.
#   - `$(TARGET)`: Links all object files (`$(OBJS)`) to create the executable.
#   - `%.o`: Compiles each `.c` file into an object file.
#   - `clean`: Removes all generated files (object files and the executable).
#   - Additional source files get added to the `SRCS` variable.

## Usage

#   - Command to build the project:
#     ```bash
#     make
#     ```
#   - Command to clean up the build files:
#     ```bash
#     make clean
#     ```
#   - Command to rebuild the project from scratch:
#     ```bash
#     make clean && make
#     ```
#
#
#
# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99 -O2 -I.

# Source files
SRCS = main.c waiic.c

# Object files (derived from source files)
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = monkey

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to build object files from source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets (not actual files)
.PHONY: all clean
