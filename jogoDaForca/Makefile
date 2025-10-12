# Define o compilador
CXX = g++

# Define as flags de compilação
CXXFLAGS = -std=c++11 -Wall

# Define o nome do executável final
EXECUTABLE = forca.exe

# Regra padrão: será executada quando você digitar apenas "make"
all: $(EXECUTABLE)

# Regra para executar o programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Regra para construir o executável
$(EXECUTABLE): forca.cpp
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) forca.cpp

# Regra para limpar os arquivos compilados
clean:
	del $(EXECUTABLE)