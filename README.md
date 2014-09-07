GraphviZ
========

This project is for people who want to have a graph of their program
The project uses Graphiz !

To test, gi into test directory and perform the following steps :


cd test/
gcc -finstrument-functions test.c instrument.c -o outbin
./outbin
cd pvtrace/
make
cp pvtrace test/
./pvtrace outbin
dot -Tpdf graph.dot -o out.pdf
