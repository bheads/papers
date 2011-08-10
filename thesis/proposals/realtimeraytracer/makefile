CC=pdflatex
SRC=proposal.tex


all: ${SRC}
	rm -f *.bbl *.blg
	${CC} ${SRC} 
	bibtex proposal
	${CC} ${SRC} 
	${CC} ${SRC} 

clean:
	rm -rf *.log *.aux *.pdf *.tex~ *.bbl *.blg *.toc *.dvi *.loa *.lof *.lot
