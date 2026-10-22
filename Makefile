main:
	mkdir -p build
	gcc src/exe.c -o build/exec
	gcc src/transformer.c -o build/trans
