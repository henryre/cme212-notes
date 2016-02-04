GPPFLAGS := -x
#GPPFLAGS += -H
GPPFLAGS += -U "<\#" ">" "\B" "|" ">" "<" ">" "\#" "~"
#GPPFLAGS += +s "\"" "\"" "\\" +s "'" "'" "\\"

2016-01-29.md : 2016-01-29.x.md
	gpp $(GPPFLAGS) $< > $@

.PHONY: clean
clean:
	$(RM) 2016-01-29.md

