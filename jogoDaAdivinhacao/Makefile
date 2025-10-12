# Define o compilador
CXX = g++

# Define as flags de compilação
CXXFLAGS = -std=c++11 -Wall

# Define o nome do executável final
EXECUTABLE = jogoDaAdivinhacao.exe

# Regra padrão: será executada quando você digitar apenas "make"
all: $(EXECUTABLE)

# Regra para executar o programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Regra para construir o executável
$(EXECUTABLE): jogoDaAdivinhacao.cpp
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) jogoDaAdivinhacao.cpp

# Regra para limpar os arquivos compilados
clean:
	del $(EXECUTABLE)