STD = -std=c89
ERRFLAGS = -W -Wall -pedantic-errors
OBJS = main.o CLinkedList.o

# SLinkedList.o : SLinkedList/header/SLinkedList.h SLinkedList/source/SLinkedList.c
# 	clang $(STD) $(ERRFLAGS) -c SLinkedList/source/SLinkedList.c

CLinkedList.o : CLinkedList/header/CLinkedList.h CLinkedList/source/CLinkedList.c
	clang $(STD) $(ERRFLAGS) -c CLinkedList/source/CLinkedList.c

main.o : main.c CLinkedList/header/CLinkedList.h
	clang $(STD) $(ERRFLAGS) -c main.c

main : $(OBJS)
	clang $(STD) $(ERRFLAGS) $(OBJS) -o main.exe
	rm -f ${OBJS}