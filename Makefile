# Nombre del ejecutable final
TARGET = mi_programa

# Compilador
CXX = g++

# Flags del compilador
CXXFLAGS = -Iinclude -Wall -g

# Directorios
SRCDIR = src
BUILDDIR = build
INCLUDEDIR = include

# Buscar todos los archivos .cpp en el directorio src
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Generar nombres de archivos .o correspondientes en el directorio build
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)

# Regla por defecto
all: $(TARGET)

# Regla para el ejecutable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para los archivos .o
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(BUILDDIR)/*.o $(TARGET)

# Regla para limpiar todo, incluyendo el ejecutable
distclean: clean
	rm -f $(TARGET)
