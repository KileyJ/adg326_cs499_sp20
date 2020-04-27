all: *.c *.h

	clang++ -o libfuzzer_cfunction libfuzzer_cfunction.cpp cfunction.c -fsanitize=fuzzer