GraphviZ
========

This project is for people who want to have a graph of their program
The project uses Graphiz !

To test, gi into test directory and perform the following steps :


1. cd test/
2. gcc -finstrument-functions test.c instrument.c -o outbin
3. ./outbin
4. cd pvtrace/
5. make
6. cp pvtrace test/
7. ./pvtrace outbin
8. dot -Tpdf graph.dot -o out.pdf
