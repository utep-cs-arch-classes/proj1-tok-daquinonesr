tokenizer: tokenizer.o s_ui.o history.o
	cc -o tokenizer tokenizer.o s_ui.o history.o
tokenizer.o: tokenizer.h tokenizer.c
s_ui.o: s_ui.c tokenizer.h history.h
history.o: history.h history.c tokenizer.h
clean: rm -f *.o tokenizer
