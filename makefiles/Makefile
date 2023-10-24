# Nom de l'exécutable
EXECUTABLE = school

# Liste des fichiers source
SOURCES = main.c school.c

# Règle "all" qui construit votre exécutable
 all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	gcc -o $(EXECUTABLE) $(SOURCES)

clean:
	rm -f $(EXECUTABLE)
