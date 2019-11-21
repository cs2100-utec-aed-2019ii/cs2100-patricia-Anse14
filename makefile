exec: compile
	@./trie.o

compile:
	@clang++ -o trie.o main.cpp
