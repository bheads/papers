CC=pdflatex
SRC=hw3.tex


all: ${SRC}
	dot -Tpng -ohw3.png hw3.dot
	${CC} ${SRC} 
	${CC} ${SRC} 

clean:
	rm -rf *.log *.aux *.pdf *.png
