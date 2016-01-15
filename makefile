%.pdf : %.md
	pandoc -o $@ $<

%.tex : %.md
	pandoc --standalone -o $@ $<

.PHONY: clean-tex
clean-tex:
	$(RM) *.tex

.PHONY: clean-pdf
clean-pdf:
	$(RM) *.pdf

.PHONY: clean-all
clean-all: clean-tex clean-pdf
